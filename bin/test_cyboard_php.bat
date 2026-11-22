@echo off
setlocal
title CYBORD PHP Host Verification Suite

:: ============================================================================
::  PORTABLE BIN CONFIGURATION (Script lives inside CYBORD\bin\)
:: ============================================================================
set "BIN_DIR=%~dp0"
if "%BIN_DIR:~-1%"=="\" set "BIN_DIR=%BIN_DIR:~0,-1%"

for %%I in ("%BIN_DIR%\..") do set "ROOT_DIR=%%~fI"

set "HOST_EXE=%BIN_DIR%\cybord.exe"
set "TEST_PHP=%BIN_DIR%\test_cybord_bridge.php"
if not exist "%TEST_PHP%" set "TEST_PHP=%ROOT_DIR%\test_cybord_bridge.php"

set "HEX_PAYLOAD=A16474657374626F6B"

:: Auto-detect cybord.dll or fallback cbord.dll inside bin\
set "CYBORD_DLL=%BIN_DIR%\cybord.dll"
if not exist "%CYBORD_DLL%" (
    if exist "%BIN_DIR%\cbord.dll" set "CYBORD_DLL=%BIN_DIR%\cbord.dll"
)

:: Enable ANSI terminal colors
for /f %%A in ('echo prompt $E ^| cmd') do set "ESC=%%A"
set "C_RESET=%ESC%[0m"
set "C_CYAN=%ESC%[96m"
set "C_GREEN=%ESC%[92m"
set "C_RED=%ESC%[91m"
set "C_GRAY=%ESC%[90m"

echo.
echo %C_CYAN%====================================================================%C_RESET%
echo %C_CYAN%  CYBORD PHP CLI HOST - RUNTIME VERIFICATION SUITE%C_RESET%
echo %C_CYAN%====================================================================%C_RESET%
echo   %C_GRAY%Repo Root : %ROOT_DIR%%C_RESET%
echo   %C_GRAY%Bin Dir   : %BIN_DIR%%C_RESET%
echo   %C_GRAY%CLI Host  : %HOST_EXE%%C_RESET%
echo   %C_GRAY%Library   : %CYBORD_DLL%%C_RESET%
echo   %C_GRAY%Test PHP  : %TEST_PHP%%C_RESET%
echo %C_CYAN%--------------------------------------------------------------------%C_RESET%
echo.

if not exist "%HOST_EXE%" (
    echo   %C_RED%[FAIL] Missing host executable: %HOST_EXE%%C_RESET%
    goto :END
)
if not exist "%CYBORD_DLL%" (
    echo   %C_RED%[FAIL] Missing CYBORD library : %CYBORD_DLL%%C_RESET%
    goto :END
)
if not exist "%TEST_PHP%" (
    echo   %C_RED%[FAIL] Missing bridge script  : %TEST_PHP%%C_RESET%
    goto :END
)

pushd "%BIN_DIR%"
"%HOST_EXE%" "%TEST_PHP%" "%HEX_PAYLOAD%" %*
set "EXIT_CODE=%ERRORLEVEL%"
popd

echo.
if "%EXIT_CODE%"=="0" (
    echo %C_GREEN%====================================================================%C_RESET%
    echo %C_GREEN%  PASSED - cybord.exe + DLL + FFI + Session + Hex Payload Ready%C_RESET%
    echo %C_GREEN%====================================================================%C_RESET%
) else (
    echo %C_RED%====================================================================%C_RESET%
    echo %C_RED%  FAILED - Host exited with code %EXIT_CODE%%C_RESET%
    echo %C_RED%====================================================================%C_RESET%
)

:END
echo.
pause
