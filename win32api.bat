@echo off
setlocal EnableDelayedExpansion
title CBORD Win32 API Build System

:: Resolve ANSI escape character for clean status colors
for /f %%A in ('echo prompt $E^| cmd') do set "ESC=%%A"
set "C_RESET=%ESC%[0m"
set "C_CYAN=%ESC%[96m"
set "C_GREEN=%ESC%[92m"
set "C_YELLOW=%ESC%[93m"
set "C_RED=%ESC%[91m"
set "C_GRAY=%ESC%[90m"

:: Root all paths to the directory containing this script
set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"

set "BIN=%ROOT%\bin"
set "OBJ=%ROOT%\obj"
set "LIB_DIR=%ROOT%\lib"
set "GEN_SRC=%ROOT%\cbord32api.c"
set "CRASH_LOG=%ROOT%\build_crash.log"

cls
echo %C_CYAN%============================================================%C_RESET%
echo %C_CYAN%  CBORD Native Win32 Runtime - Build Setup%C_RESET%
echo %C_CYAN%============================================================%C_RESET%
echo %C_GRAY%  Root Directory: %ROOT%%C_RESET%
echo.

if not exist "%BIN%" mkdir "%BIN%"
if not exist "%OBJ%" mkdir "%OBJ%"
if not exist "%LIB_DIR%" mkdir "%LIB_DIR%"
if exist "%CRASH_LOG%" del /q "%CRASH_LOG%" >nul 2>&1

:: Close any running instances locking output binaries
taskkill /F /IM cbord.exe >nul 2>&1
taskkill /F /IM cbord32api_gen.exe >nul 2>&1

:: Auto-initialize x64 MSVC toolchain if needed
where cl.exe >nul 2>&1
if errorlevel 1 (
    echo %C_GRAY%  Initializing Visual Studio x64 build tools...%C_RESET%
    set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
    if exist "!VSWHERE!" (
        for /f "usebackq tokens=*" %%I in (`"!VSWHERE!" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath`) do (
            set "VS_PATH=%%I"
        )
    )
    if defined VS_PATH (
        if exist "!VS_PATH!\VC\Auxiliary\Build\vcvars64.bat" (
            call "!VS_PATH!\VC\Auxiliary\Build\vcvars64.bat" >nul 2>&1
        )
    )
)

:: 1. Locate Windows SDK x64 libraries
set "STEP=Step 1 of 4: Locating Windows SDK"
set "DETAIL_LOG="
echo %C_YELLOW%[1/4]%C_RESET% Locating Windows SDK x64 libraries...
set "SDK_LIB="
for %%D in ("%LIB:;=" "%") do (
    if exist "%%~D\user32.lib" set "SDK_LIB=%%~D"
)
if not defined SDK_LIB (
    set "ERR_MSG=Windows SDK x64 libraries were not found. Please install the Windows 10/11 SDK with Visual Studio C++ Build Tools."
    set "LAST_RC=1"
    goto :fail
)
echo       %C_GREEN%[OK]%C_RESET% SDK found

:: 2. Merge core Win32 import libraries
set "STEP=Step 2 of 4: Preparing Win32 import libraries"
set "DETAIL_LOG=%OBJ%\step2_lib.log"
echo %C_YELLOW%[2/4]%C_RESET% Preparing core Win32 import libraries...
lib /NOLOGO /IGNORE:4006 /OUT:"%LIB_DIR%\win32_all.lib" ^
    "%SDK_LIB%\kernel32.lib" "%SDK_LIB%\user32.lib" "%SDK_LIB%\gdi32.lib" ^
    "%SDK_LIB%\advapi32.lib" "%SDK_LIB%\shell32.lib" "%SDK_LIB%\ole32.lib" ^
    "%SDK_LIB%\oleaut32.lib" "%SDK_LIB%\comdlg32.lib" "%SDK_LIB%\comctl32.lib" ^
    "%SDK_LIB%\ws2_32.lib" "%SDK_LIB%\winmm.lib" "%SDK_LIB%\shlwapi.lib" >"%DETAIL_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to bundle Windows SDK import libraries."
    set "LAST_RC=!errorlevel!"
    goto :fail
)
echo       %C_GREEN%[OK]%C_RESET% Libraries bundled
:: 3. Generate Win32 API bindings & constants
set "STEP=Step 3 of 4: Generating Win32 API bindings"
set "DETAIL_LOG=%OBJ%\step3_dumpbin.err"
echo %C_YELLOW%[3/4]%C_RESET% Generating Win32 API bindings...
dumpbin /NOLOGO /EXPORTS "%LIB_DIR%\win32_all.lib" > "%OBJ%\win32_exports.txt" 2>"%DETAIL_LOG%"
if errorlevel 1 (
    set "ERR_MSG=Failed to inspect Windows SDK exports."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

(
    echo #undef WIN32_LEAN_AND_MEAN
    echo #include ^<windows.h^>
) > "%OBJ%\win_inc.c"

set "DETAIL_LOG=%OBJ%\step3_preprocess.err"
cl /nologo /EP "%OBJ%\win_inc.c" > "%OBJ%\win_flat.h" 2>"%DETAIL_LOG%"
if errorlevel 1 (
    set "ERR_MSG=Failed to preprocess Windows SDK headers."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

cl /nologo /EP /d1PP "%OBJ%\win_inc.c" > "%OBJ%\win_defs.h" 2>"%DETAIL_LOG%"
if errorlevel 1 (
    set "ERR_MSG=Failed to extract Windows SDK macros."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

if not exist "%GEN_SRC%" (
    set "ERR_MSG=Missing required file: cbord32api.c in %ROOT%"
    set "LAST_RC=1"
    goto :fail
)

set "DETAIL_LOG=%OBJ%\step3_gen_compile.log"
cl /nologo /O2 "%GEN_SRC%" /Fe:"%OBJ%\cbord32api_gen.exe" /Fo:"%OBJ%\cbord32api_gen.obj" >"%DETAIL_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to build the API binding generator."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

set "DETAIL_LOG=%OBJ%\step3_gen_run.log"
"%OBJ%\cbord32api_gen.exe" "%OBJ%\win32_exports.txt" "%OBJ%\win_flat.h" "%ROOT%\win32api_wrappers.c" "%ROOT%\win32_table.h" "%ROOT%\win32api.def" "%OBJ%\win_defs.h" >"%DETAIL_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Binding generator encountered an error."
    set "LAST_RC=!errorlevel!"
    goto :fail
)
echo       %C_GREEN%[OK]%C_RESET% Bindings generated


:: 4. Build binaries
set "STEP=Step 4 of 4: Building runtime binaries"
set "DETAIL_LOG=%OBJ%\step4_win32api.log"
echo %C_YELLOW%[4/4]%C_RESET% Building win32api.dll, cbord.dll, and cbord.exe...
cl /nologo /LD /O1 /bigobj "%ROOT%\win32api_wrappers.c" "%LIB_DIR%\win32_all.lib" ^
    /Fe:"%BIN%\win32api.dll" /Fo:"%OBJ%\win32api_wrappers.obj" ^
    /link /DEF:"%ROOT%\win32api.def" /IMPLIB:"%LIB_DIR%\win32api.lib" >"%DETAIL_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to compile win32api.dll."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

if not exist "%ROOT%\cbord_dll.c" (
    set "ERR_MSG=Missing required file: cbord_dll.c in %ROOT%"
    set "LAST_RC=1"
    goto :fail
)

(
    echo LIBRARY cbord
    echo EXPORTS
    echo     API @1
) > "%ROOT%\cbord.def"

set "DETAIL_LOG=%OBJ%\step4_cbord_dll.log"
cl /nologo /LD /O2 /bigobj /I"%ROOT%" "%ROOT%\cbord_dll.c" "%LIB_DIR%\win32api.lib" ^
    /Fe:"%BIN%\cbord.dll" /Fo:"%OBJ%\cbord_dll.obj" ^
    /link /DEF:"%ROOT%\cbord.def" /IMPLIB:"%LIB_DIR%\cbord.lib" >"%DETAIL_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to compile cbord.dll."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

if not exist "%ROOT%\cbord.c" (
    set "ERR_MSG=Missing required file: cbord.c in %ROOT%"
    set "LAST_RC=1"
    goto :fail
)

set "DETAIL_LOG=%OBJ%\step4_cbord_exe.log"
cl /nologo /O2 /I"%ROOT%" "%ROOT%\cbord.c" "%LIB_DIR%\cbord.lib" ^
    /Fe:"%BIN%\cbord.exe" /Fo:"%OBJ%\cbord.obj" >"%DETAIL_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to compile cbord.exe."
    set "LAST_RC=!errorlevel!"
    goto :fail
)

move /y "%LIB_DIR%\*.exp" "%OBJ%\" >nul 2>&1
echo       %C_GREEN%[OK]%C_RESET% Binaries built

echo.
echo %C_GREEN%============================================================%C_RESET%
echo %C_GREEN%  [DONE] Build completed successfully!%C_RESET%
echo %C_GREEN%============================================================%C_RESET%
echo   Output files are ready in:
echo     %BIN%\cbord.exe
echo     %BIN%\cbord.dll
echo     %BIN%\win32api.dll
echo.
pause
exit /b 0

:fail
echo.
echo %C_RED%============================================================%C_RESET%
echo %C_RED%  [ERR] Build Failed%C_RESET%
echo %C_RED%============================================================%C_RESET%
echo   Stage : %STEP%
echo   Reason: %ERR_MSG%
echo.
(
    echo ============================================================
    echo CBORD BUILD ERROR REPORT - %DATE% %TIME%
    echo STAGE    : %STEP%
    echo REASON   : %ERR_MSG%
    echo EXIT CODE: %LAST_RC%
    echo ============================================================
) > "%CRASH_LOG%"
if defined DETAIL_LOG (
    if exist "%DETAIL_LOG%" (
        echo --- Technical Details --- >> "%CRASH_LOG%"
        type "%DETAIL_LOG%" >> "%CRASH_LOG%"
        echo %C_GRAY%--- Technical Details ---%C_RESET%
        type "%DETAIL_LOG%"
        echo.
    )
)
echo   Diagnostic log saved to: %CRASH_LOG%
echo.
pause
exit /b %LAST_RC%
