#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void func(int **ptr)
{
    int x = 20;
    *ptr = &x;
    printf("2- value of ptr is : %d\n", **ptr);
}

void main()
{
    int x = 10;
    int *ptr;
    ptr = &x;
    printf("1- value of ptr is : %d\n", *ptr);
    func(&ptr);
    printf("3- value of ptr is : %d\n", *ptr);
}
