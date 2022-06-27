#ifndef PROTOTYPESDEF_H
// function prototypes are declared in this file
// the prototype is just specification, which gives :
//   function name
//   type of return
//   function arguments
// but not give the implementation like specific processing in the function.
// The file gives function usage.
#include "prototypesdef.h"

    // Instead of including the header file above,
    // these two lines also allow to use the function in the program
    // extern void echo(const char* message);
    // extern int add(int x, int y);
    void
    echo(const char *message);
int add(int x, int y);
#endif
