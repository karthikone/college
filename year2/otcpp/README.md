# OBJECT-ORIENTED PROGRAMING THROUGH C++
###### 2<sup>nd</sup>(Year):1<sup>st</sup>(Sem.)(CS305PC)
This is a **Reference** repository Created by me for **C++** programing language.
## ⚠️Caution :
- All programs are written on/for **g++(c++17& above)** compiler so they won't run on **Turbo C++**.
- These programs runs on gcc/g++,MinGW(x86),MinGW-W64(x64),Clang,MSVC Compilers.
### How to Compile C/C++ files in an android device :
0. **Before get started**, Termux is an Android terminal emulator and Linux environment app that works directly with no          rooting or setup required.
   A minimal base system is installed automatically - additional packages are available using the APT package manager. We        need some basic linux commands to work with termux.
   
   **These are the helpful linux commands :**
      1. Creating Directory           : ```mkdir [dir name]```
      2. Clear the Screen             : ```clear```
      3. Change Directory             : ```cd /[path]```
      3. Deleting Directory/files     : ```rm -rf [dir name]```
      4. Installing packages          : ```pkg install [package name] -y```
      5. List out Directories         : ```ls``` use ```-a``` flag to list all(hidden) files.
      6. Removing packages            : ```pkg remove [package name] -y```
      7. Exit from any running program:  Press ```Ctrl + C```
      8. To get help                  : ```help [package/program name]```
      9. To get Mannuals of packages  : ```man [/package/program name]```
       
1. Download [Termux](https://play.google.com/store/apps/details?id=com.termux&hl=en).
2. Install **Clang** compiler  :
    - Copy/paste this : ```pkg install clang -y```
3. Install **Text editor(nano) :**
    - Copy/paste this : ```pkg install nano -y```
4. Create **c/c++** files by using nano :
    - To Creat a file ```nano [nameofthefile].[file_extension]```
      - To Creat c file   : ```nano helloworld.c```.
    - To creat c++ file : ```nano helloworld.cpp```.
    - Write any  C/C++ Code.
        - Here sample c++ code  :
         ```
            #include<iostream>
            using namespace std;
            int main()
            {
                cout<<"Hello world!"
                return 0;
            }   
    > ⚠️Don't use **conio.h** and it's related functions ,Such as clrscr(),getch(),etc. in gcc/g++,Because **conio.h** is       MS-DOS(Windows) file whereas gcc is       built for linux/bash shell.
    - To save the file  : Press ```Ctrl + O```.
    - To exit form  nano: Press ```Ctrl + X```.
5. Working with an Old Compiler :

   **Differences between Old compiler(Turboc++) and gcc/g++/etc.**:
 
    - As we know ,when we use a library function in a program, you must include its header.
      This is done by uising **#include** statement. For example ,in C++,to include the header for the I/O functions,you             include **iostream.h** with a statement like this :
      ```#include<iostream.h>```
      The new-style headers are included using the **#include** statement .The only difference is that the new-style
      headers don't necessarily represent filenames.For **Example :** ```#include<iostream>``` No need to mention ".h"
      after header in new-style headers.
      The C++ version of new-style headers simply  add a **"c"** prefix to the header/filename and drop **".h"**
      For example ,New-style header for **math.h** is **cmath**.The one for **string.h** is **cstring**.
    - Both **namespace** and the **new-style headers** are fairly recent additions to the c++.
      while all new C++ Compilers support these features,**older compilers(turboc++)many not**.
      When this is the case ,your computer/compiler report one or more errors when it tries to compile the first two               lines of the sample program.if this is the case ,there is an easy work-around:
      - To make this code work on turboc++
        - Simply use Old-Style header ```#include<iostream.h>``` instead            ```#include<iostream>```.
        -  Remove ```using namespace std;``` line .
6. Compile C/C++ files : 
    **Compiling C++ files :**
     - To Compile C++ files : ```g++ [filename.cpp] -o [filename] ```
      - eg : ```g++ helloworld.cpp -o hello```.
      - To Execute C files : ```./[filename]```
        - eg : ```./hello```.
   **Compiling C files :**
    - To Compile C files : ```gcc [filename.c] -o [filename] ```
      - eg : ```gcc helloworld.c -o hello```.
    - To Execute C files : ```./[filename]```
      - eg : ```./hello```
      
 7. Creating Shortcut to compile files in g++
    - Watch this [Video](https://www.youtube.com/watch?v=vAgNQX_RCOY).

