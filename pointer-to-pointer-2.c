#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void func(int **ptr)
{
}

void main()
{
    int x = 10;
    int *ptx;
    int **ptp;

    ptx = &x;
    *ptp = &*ptx;

    printf("x is :%p\nptx is :%p\nptp is :%p\n", &x, &ptx, &ptp);
    printf("x is :%d\nptx is :%d\nptp is :%d\n", x, *ptx, **ptp);
}

