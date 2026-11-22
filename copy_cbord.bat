@echo off
setlocal
title Copy Required CBORD DLLs to CYBORD\bin

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
if not exist "%CYBORD_BIN%" mkdir "%CYBORD_BIN%"

:: Resolve canonical sibling ..\CBORD\bin path
for %%I in ("%ROOT%\..\CBORD\bin") do set "CBORD_BIN=%%~fI"
if not exist "%CBORD_BIN%\cbord.dll" set "CBORD_BIN=%ROOT%"

echo.
echo %CYAN%====================================================================%RST%
echo   %WHITE%COPYING REQUIRED CBORD DLLs -^> CYBORD\bin%RST%
echo   %GRAY%Source : %CYAN%%CBORD_BIN%%RST%
echo   %GRAY%Target : %CYAN%%CYBORD_BIN%%RST%
echo %CYAN%====================================================================%RST%
echo.

if exist "%CBORD_BIN%\cbord.dll" (
    copy /Y "%CBORD_BIN%\cbord.dll" "%CYBORD_BIN%\" >nul
    echo   %GREEN%[OK]%RST% Copied %WHITE%cbord.dll%RST%
) else (
    echo   %RED%[MISSING]%RST% %GRAY%%CBORD_BIN%\cbord.dll%RST%
)

if exist "%CBORD_BIN%\win32api.dll" (
    copy /Y "%CBORD_BIN%\win32api.dll" "%CYBORD_BIN%\" >nul
    echo   %GREEN%[OK]%RST% Copied %WHITE%win32api.dll%RST%
) else (
    echo   %RED%[MISSING]%RST% %GRAY%%CBORD_BIN%\win32api.dll%RST%
)

if exist "%CBORD_BIN%\cbord.exe" (
    copy /Y "%CBORD_BIN%\cbord.exe" "%CYBORD_BIN%\" >nul
    echo   %GREEN%[OK]%RST% Copied %WHITE%cbord.exe%RST%
) else (
    echo   %RED%[MISSING]%RST% %GRAY%%CBORD_BIN%\cbord.exe%RST%
)

echo.
pause
