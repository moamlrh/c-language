#include <stdio.h>

#define ROWS 3
#define COLS 4
void main()
{
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13},
    };
    for (int i = 0; i < ROWS; i++)
    {
        for (int x = 0; x < COLS; x++)
        {
            printf("%5d", arr[i][x]);
        }
        printf("\n");
    }
    
}