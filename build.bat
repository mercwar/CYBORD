@echo off
setlocal EnableDelayedExpansion
title CBORD Runtime - Quick Build

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
set "BUILD_LOG=%OBJ%\quick_build.log"

cls
echo %C_CYAN%============================================================%C_RESET%
echo %C_CYAN%  CBORD Runtime - Quick Rebuild%C_RESET%
echo %C_CYAN%============================================================%C_RESET%
echo %C_GRAY%  Directory: %ROOT%%C_RESET%
echo.

if not exist "%BIN%" mkdir "%BIN%"
if not exist "%OBJ%" mkdir "%OBJ%"
if not exist "%LIB_DIR%" mkdir "%LIB_DIR%"
if exist "%BUILD_LOG%" del /q "%BUILD_LOG%" >nul 2>&1

:: Close any running instances locking output binaries
taskkill /F /IM cbord.exe >nul 2>&1

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

:: Clean loose root binaries
del /q "%ROOT%\cbord.dll" "%ROOT%\cbord.exe" "%ROOT%\*.obj" "%ROOT%\*.exp" >nul 2>&1

:: Verify win32api.lib exists
if not exist "%LIB_DIR%\win32api.lib" (
    set "ERR_MSG=Missing lib\win32api.lib. Run the full build script first to generate Win32 bindings."
    goto :fail
)
:: Verify win32api.lib and win32_table.h exist
if not exist "%LIB_DIR%\win32api.lib" (
    set "ERR_MSG=Missing lib\win32api.lib. Run the full build script first to generate Win32 bindings."
    goto :fail
)
if not exist "%ROOT%\win32_table.h" (
    set "ERR_MSG=Missing win32_table.h. Run the full build script first to generate Win32 bindings."
    goto :fail
)

:: 1. Write cbord.def
echo %C_YELLOW%[1/3]%C_RESET% Generating export definition (cbord.def)...
(
    echo LIBRARY cbord
    echo EXPORTS
    echo     API @1
) > "%ROOT%\cbord.def"
echo       %C_GREEN%[OK]%C_RESET% Export definition ready

:: 2. Build bin\cbord.dll + lib\cbord.lib
echo %C_YELLOW%[2/3]%C_RESET% Compiling cbord.dll...
cl.exe /nologo /LD /O2 /bigobj /I"%ROOT%" "%ROOT%\cbord_dll.c" "%LIB_DIR%\win32api.lib" ^
    /Fe:"%BIN%\cbord.dll" /Fo:"%OBJ%\cbord_dll.obj" ^
    /link /DEF:"%ROOT%\cbord.def" /IMPLIB:"%LIB_DIR%\cbord.lib" >"%BUILD_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to compile cbord.dll."
    goto :fail
)
echo       %C_GREEN%[OK]%C_RESET% cbord.dll built

:: 3. Build bin\cbord.exe linked to lib\cbord.lib
echo %C_YELLOW%[3/3]%C_RESET% Compiling cbord.exe...
cl.exe /nologo /O2 /I"%ROOT%" "%ROOT%\cbord.c" "%LIB_DIR%\cbord.lib" ^
    /Fe:"%BIN%\cbord.exe" /Fo:"%OBJ%\cbord.obj" >"%BUILD_LOG%" 2>&1
if errorlevel 1 (
    set "ERR_MSG=Failed to compile cbord.exe."
    goto :fail
)
echo       %C_GREEN%[OK]%C_RESET% cbord.exe built

move /y "%LIB_DIR%\*.exp" "%OBJ%\" >nul 2>&1

echo.
echo %C_GREEN%============================================================%C_RESET%
echo %C_GREEN%  [DONE] Quick rebuild completed successfully!%C_RESET%
echo %C_GREEN%============================================================%C_RESET%
echo   Updated binaries:
echo     %BIN%\cbord.dll
echo     %BIN%\cbord.exe
echo.
pause
exit /b 0

:fail
echo.
echo %C_RED%============================================================%C_RESET%
echo %C_RED%  [ERR] Build Failed%C_RESET%
echo %C_RED%============================================================%C_RESET%
echo   Reason: %ERR_MSG%
echo.
if exist "%BUILD_LOG%" (
    echo %C_GRAY%--- Compiler Output ---%C_RESET%
    type "%BUILD_LOG%"
    echo.
)
pause
exit /b 1
