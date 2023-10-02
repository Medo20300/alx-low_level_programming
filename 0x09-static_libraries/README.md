## 0x09. C - Static libraries


![1620088158145](https://github.com/Medo20300/alx-system_engineering-devops/assets/135258669/44e40b2b-cc98-48c4-a697-4c242ad6628c)


##  Resources

### Read or watch:

   * https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html
   * https://www.youtube.com/watch?v=eW5he5uFBNM
   * https://makori-mildred.medium.com/how-to-create-static-library-in-c-and-how-to-use-it-b8b3e1fde999


## man or help:

   * ar
   * ranlib
   * nm

## How to Create Static Library in C and How to Use it.

### Steps to create a static library

### step1. Create a C file(s) that contains functions in your library.

/* filename: atoi.c */

void my_func()
{
  printf("my_func() Am learning to create a library in C");
}

Note: For simplicity purposes, have created only one file, you can create multiple files as well.

### step2. Create the header file for your library

/* filename: main.h */

void my_func();
##### Header file(It contains all function prototypes)


## step3. Compiling your library file(s)

/* compiling: atoi.c */

gcc -c atoi.c -o atoi.o

/* for multiple files you can use the below command */
/* it will select all .c extension files */

gcc -c *.c 

## step4. This step bundles up multiple object files in one static library (check ar for further details). 
   The output is a static library/archive. The ar   chiver, also known simply as ar, is a Unix utility 
   that maintains groups of files as a single archive file.


/* archiving: atoi.o */

ar rcs lib_myLibrary.a atoi.o 

/* for multiple file you can use the fllowing command*/

ar rcs lib_myLibrary.a *.o/* This will select all .o files (all object files)*/

And yey! our static library is ready to use!




