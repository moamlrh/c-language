#include <stdio.h>
#include <string.h>

#define SIZE_ARR_AGE 5

void main()
{

    int max, min;
    int arr[] = {1, 44, 22, 33, 11, 492, 32, 1291, -12, 833};
    min = max = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Max :%d \nMin:%d \n", max, min);
}
