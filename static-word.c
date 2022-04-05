/*
    when we use static with a variable inside a function it's mean the value of var 
    it's won't change every time we call the function,
    try to delete the static from the example below and see the difference. 


    1- A static variable inside a function keeps its value between invocations.
    2- A static global variable or a function is "seen" only in the file it's declared in

    you can create function with static keyword that's mean 
    the you can't use the function in other files 
*/

#include "stdio.h"
#include "stdlib.h"

void func()
{
    static int x = 10;
    printf("%d\n", x);
    x++;
}


int main(int argc, char const *argv[])
{
    func(); // x = 10
    func(); // x = 11
    func(); // x = 12
    func(); // x = 13

    return 0;
}
