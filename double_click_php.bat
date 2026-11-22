@echo off
setlocal
title Associate .php Files with CYBORD Runtime

:: Enable ANSI terminal colors
for /f %%A in ('echo prompt $E ^| cmd') do set "ESC=%%A"
set "C_RESET=%ESC%[0m"
set "C_CYAN=%ESC%[96m"
set "C_GREEN=%ESC%[92m"
set "C_RED=%ESC%[91m"
set "C_GRAY=%ESC%[90m"
set "C_WHITE=%ESC%[97m"

:: Auto-detect cybord.exe whether placed in CYBORD\ or CYBORD\bin\
set "BASE_DIR=%~dp0"
if "%BASE_DIR:~-1%"=="\" set "BASE_DIR=%BASE_DIR:~0,-1%"

set "CYBORD_EXE=%BASE_DIR%\cybord.exe"
if not exist "%CYBORD_EXE%" set "CYBORD_EXE=%BASE_DIR%\bin\cybord.exe"

echo.
echo %C_CYAN%====================================================================%C_RESET%
echo %C_CYAN%  CYBORD RUNTIME :: .PHP FILE ASSOCIATION SETUP%C_RESET%
echo %C_CYAN%====================================================================%C_RESET%
echo   %C_GRAY%Target Executable : %C_WHITE%%CYBORD_EXE%%C_RESET%
echo %C_CYAN%--------------------------------------------------------------------%C_RESET%
echo.

if not exist "%CYBORD_EXE%" (
    echo   %C_RED%[FAIL] Could not locate cybord.exe in:%C_RESET%
    echo          %C_GRAY%%BASE_DIR%%C_RESET%
    echo          %C_GRAY%%BASE_DIR%\bin%C_RESET%
    echo.
    pause
    exit /b 1
)

:: 1. Register .php extension -> CYBORD.PHPFile ProgID (Current User - No Admin Needed)
reg add "HKCU\Software\Classes\.php" /ve /t REG_SZ /d "CYBORD.PHPFile" /f >nul

:: 2. Define file type description and icon
reg add "HKCU\Software\Classes\CYBORD.PHPFile" /ve /t REG_SZ /d "CYBORD PHP Script" /f >nul
reg add "HKCU\Software\Classes\CYBORD.PHPFile\DefaultIcon" /ve /t REG_SZ /d "\"%CYBORD_EXE%\",0" /f >nul

:: 3. Register open command ("cybord.exe" "%1" %*)
reg add "HKCU\Software\Classes\CYBORD.PHPFile\shell\open" /ve /t REG_SZ /d "Run with CYBORD" /f >nul
reg add "HKCU\Software\Classes\CYBORD.PHPFile\shell\open\command" /ve /t REG_SZ /d "\"%CYBORD_EXE%\" \"%%1\" %%*" /f >nul

:: 4. Clear any conflicting Windows 10/11 UserChoice lock if present
reg delete "HKCU\Software\Microsoft\Windows\CurrentVersion\Explorer\FileExts\.php\UserChoice" /f >nul 2>&1

:: 5. Notify Windows Explorer to refresh file icons & associations immediately
ie4uinit.exe -show >nul 2>&1

echo   %C_GREEN%[OK] Associated .php files with CYBORD.PHPFile%C_RESET%
echo   %C_GREEN%[OK] Registered command: "%CYBORD_EXE%" "%%1" %%*%C_RESET%
echo.
echo %C_CYAN%====================================================================%C_RESET%
echo %C_GREEN%  DONE - Double-click any .php file or run it directly from CMD!%C_RESET%
echo %C_CYAN%====================================================================%C_RESET%
echo.
pause
