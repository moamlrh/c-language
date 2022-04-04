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