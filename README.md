# CrossCompilation
Compile C or C++ programs for macOS, Linux and Windows from your mac.

Instructions
------------

**1 -** Download the latest version of the project from the "**releases**" tab.  
**2 -** Decompress the file: 
* Go to the **compilers** folder, 
* Open **Linux.txt** or **Windows.txt**,
* Open the link inside to **download the compiler**.  

**3 -** Decompress the "**.tar.xz**" file/s using this command (FILENAME will be "Linux" or "Windows":  
```bash
tar -xJf FILENAME.tar.xz
```
**4 -** Go to the "**Makefile-Example**" folder:
* Open the makefile,
* Change the compilers paths or flags if necessary,
* Run the **makefile** using "make" command on the terminal.  

**5 -** The makefile should have been compiled the example program for **macOS, linux and Windows**.  

Links
----
* Cross GCC on MacOS: http://crossgcc.rts-software.org/doku.php  
Original author: Pierre Molinaro ©

* GCC: https://gcc.gnu.org

