#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age = 21; // integer varialbe;
    int *pAge; // initiliaze the pointer;

    pAge = &age; // assign the position of age var to the pAge pointer;


    printf("%p\n", pAge); // print the pointer "position of age in hexadecimal"
    printf("%d\n", *pAge); // deserialization of pointer or  print the value of 
}
