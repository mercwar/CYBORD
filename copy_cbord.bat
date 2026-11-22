@echo off
setlocal
title Copy Required CBORD DLLs & LIBs to CYBORD

for /f %%A in ('echo prompt $E^| cmd') do set "ESC=%%A"
set "RST=%ESC%[0m"
set "CYAN=%ESC%[96m"
set "GRAY=%ESC%[90m"
set "GREEN=%ESC%[92m"
set "RED=%ESC%[91m"
set "WHITE=%ESC%[97m"

set "ROOT=%~dp0"
if "%ROOT:~-1%"=="\" set "ROOT=%ROOT:~0,-1%"

set "CYBORD_BIN=%ROOT%\bin"
set "CYBORD_LIB=%ROOT%\lib"
if not exist "%CYBORD_BIN%" mkdir "%CYBORD_BIN%"
if not exist "%CYBORD_LIB%" mkdir "%CYBORD_LIB%"

:: Resolve canonical sibling ..\CBORD paths
for %%I in ("%ROOT%\..\CBORD") do set "CBORD_ROOT=%%~fI"
set "CBORD_BIN=%CBORD_ROOT%\bin"
set "CBORD_LIB=%CBORD_ROOT%\lib"

echo.
echo %CYAN%====================================================================%RST%
echo   %WHITE%COPYING REQUIRED CBORD BINARIES & IMPORT LIBS -^> CYBORD%RST%
echo   %GRAY%Source : %CYAN%%CBORD_ROOT%%RST%
echo   %GRAY%Target : %CYAN%%ROOT%%RST%
echo %CYAN%====================================================================%RST%
echo.

:: 1. Copy runtime binaries to CYBORD\bin
for %%F in (cbord.dll win32api.dll cbord.exe php8ts.dll php.ini) do (
    if exist "%CBORD_BIN%\%%F" (
        copy /Y "%CBORD_BIN%\%%F" "%CYBORD_BIN%\" >nul
        echo   %GREEN%[OK]%RST% Copied %WHITE%bin\%%F%RST%
    ) else (
        echo   %RED%[MISSING]%RST% %GRAY%%CBORD_BIN%\%%F%RST%
    )
)

:: 2. Copy linker import libraries to CYBORD\lib
for %%F in (win32api.lib cbord.lib) do (
    if exist "%CBORD_LIB%\%%F" (
        copy /Y "%CBORD_LIB%\%%F" "%CYBORD_LIB%\" >nul
        echo   %GREEN%[OK]%RST% Copied %WHITE%lib\%%F%RST%
    ) else (
        echo   %RED%[MISSING]%RST% %GRAY%%CBORD_LIB%\%%F%RST%
    )
)

echo.
pause
