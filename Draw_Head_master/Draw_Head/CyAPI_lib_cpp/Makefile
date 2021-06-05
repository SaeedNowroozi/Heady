all:
	@del CyAPI.*
	@C:\MinGW\bin\g++ src/CyAPI.cpp -lsetupapi -I inc -c -o CyAPI.o -Wno-conversion-null
	@ar rcs CyAPI.a CyAPI.o
	@echo CyAPI.a generated...
