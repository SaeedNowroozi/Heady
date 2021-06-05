@echo off
REM set PATH=%PATH%;C:\MinGW\bin
set PATH=%PATH%;C:\Qt\Tools\mingw482_32\bin
C:\MinGW\bin\mingw32-make %
REM Qt creator will read the proper file name: .lib.
copy CyAPI.a CyAPI.lib

