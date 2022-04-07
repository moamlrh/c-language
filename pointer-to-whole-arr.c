#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void sum(int (*arr)[SIZE])
{
    int size = sizeof(*arr) / sizeof(int);
    printf("size of arr : %d\n", size);
    printf("position of arr : %d\n", **arr);
}
void main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};


    int(*ptr)[SIZE];

    ptr = &arr;

    printf("Size of arr: %ld\n", sizeof(arr)/sizeof(int));
    printf("%p\n%p\n%p\n", ptr, &arr, arr+1);
    printf("value of 2nd element in array is : %d\n", *(arr+1));
    sum(&arr);
}