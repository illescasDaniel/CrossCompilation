windowsPath = ~/Downloads/CrossCompilation-1.0/Compilers/Windows
linuxPath = ~/Downloads/CrossCompilation-1.0/Compilers/Linux

# Libraries = -L lib
Headers = -I include
Sources = main.cpp $(Headers) $(Libraries)
CompilerFlags = -O2 -Wall
OutputName = main

remove:=$(shell type -p rmtrash || echo rm)

all: macOS windows linux

macOS:
	@g++ -std=c++1z $(CompilerFlags) $(Sources) -o $(OutputName)-macOS
windows:
	@$(windowsPath)/bin/i586-mingw32-g++ -std=c++1y $(CompilerFlags) $(Sources) -o $(OutputName)-windows.exe
linux:
	@$(linuxPath)/bin/x86_64-pc-linux-g++ -std=c++1y $(CompilerFlags) $(Sources) -o $(OutputName)-linux.out

clean:
	@$(remove) $(OutputName)-macOS
	@$(remove) $(OutputName)-windows.exe
	@$(remove) $(OutputName)-linux.out
