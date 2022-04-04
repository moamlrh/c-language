/*
    Let's say you have two .c-files test1.c and test2.c. 
    If you define a global variable int test1_var; in test1.c 
    and you'd like to access this variable in test2.c 
    you have to use extern int test1_var; in test2.c.
*/

#include <stdio.h>
#include <stdlib.h>
#include "firstapp.h"

extern int myVar; // has been defined in another file

void main()
{
    printf("From main.c %d\n", myVar); // we can use it here will print the value from the original file
    myVar = 20; // will change the value of the myVar in all files
    func(); // it's a function from the original file that will print the value of extern the has been defined in it 
}