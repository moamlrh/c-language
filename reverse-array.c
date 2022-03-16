#include <stdio.h>

#define SIZE 10

int main(int argc, char const *argv[])
{
    int arr[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, tmp;

    for (i = 0, j = 9; i < j; i++, j--)
    {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
