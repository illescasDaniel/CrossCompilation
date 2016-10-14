## COMPILER PATHS ##
windowsPath = ~/Downloads/"MAC Software"/CrossCompilation-1.0/Compilers/Windows
linuxPath = ~/Downloads/"MAC Software"/CrossCompilation-1.0/Compilers/Linux

## FLAGS ##
#Libraries = -L lib
Headers = -I include
Sources = main.cpp $(Headers) $(Libraries)
CompilerFlags = -O2 -Wall
OutputName = main

## TARGETS ##

all: macOS windows linux

macOS:
	@g++ -std=c++1z $(CompilerFlags) $(Sources) -o $(OutputName)-macOS

windows:
	@$(windowsPath)/bin/i586-mingw32-g++ -std=c++1y $(CompilerFlags) $(Sources) -o $(OutputName)-windows.exe

linux:
	@$(linuxPath)/bin/x86_64-pc-linux-g++ -std=c++1y $(CompilerFlags) $(Sources) -o $(OutputName)-linux.out

clean:
	@rm $(OutputName)-macOS
	@rm $(OutputName)-windows.exe
	@rm $(OutputName)-linux.out
