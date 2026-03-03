# learning-of-c

A repository to record my C learning: notes, exercises and example programs.

## Table of Content
*    [Example Program](#example-programs)
*    [Learning Log](#learning-log)
*    [Tips](#tips)

##  Example Programs
*    The siplest C program.
   ```c
     //This is a simplest C program, with nothing output.
     //However, it's the skeletal struture upon which almost every C application is built. 
     //It tells the compiler to include the contents of the Standard Input Output header file(stdio.h).
     //int: This is the return type. It tells the operating system thay when this program finishes, it will send back an integer value(usually 0 for success).
     //main: This is the "front door" of your program. Every C program  must have a function named main. When you run the code, the executinon starts exactly here.
     // (): These parentheses are for parameters. In this simple version, they are empty, meaning the function doesn't require any extra information to start.
     //The Exit Code: This line ends the main function.
     //The Logic: In C, returning 0 is a universal signal to the Operating System that the program executed successfully without any errors. If something had gone wrong, you might return a non-zero number (like 1).
     //";": In C, the ; acts like a period at the end of a sentence. It tells the compiler that the instruction is complete.
     //The "{}" define the scope of the function.
     //Everything written inside these braces is the actual "work" the program performs. Think of it as the container for your logic.

     #include <stdio.h>

     int main()
     {
          return 0;
     }
   ```

## Learning Log

- Feb. 23
     >Due to an oversight while reading the official documentation on configuring C in VSCode, I missed a key note stating: "Starting November 3, 2024, MSYS2 has disabled wildcard support for mingw-w64 by default. This affects how wildcards such as '*.cpp' are handled in build commands." As a result, I struggled through a difficult JSON configuration process. Eventually, with help from Jacktao and J. tao, the issue was finally resolved. We ended up adopting a WSL + VS Code approach and configuring GCC to address the wildcard problem. The process was somewhat involved, so I won't delve into the details here.

 

## Tips

- ~~If you use Git through Clash, enable TUN mode before using `git`.~~*(Throgh I worte this tip not long ago, while struggling to resolve the JSON issue, I updated Clash and found that whether TUN mode may interfere with the host-to-WSL network mapping on Windows, it can even cause git to fail. )*