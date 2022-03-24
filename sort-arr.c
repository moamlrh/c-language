#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int size)
{
    for (int i = 0; i < size ; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}
void main()
{
    int arr[] = {9,8,2,3,4,1,7,6,5};
    int size = sizeof(arr) / sizeof(arr[1]);
    sort(arr, size);
    printArr(arr, size);
}