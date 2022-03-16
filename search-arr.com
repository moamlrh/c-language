#include <stdio.h>

#define SIZE 10

int main(int argc, char const *argv[])
{

    int arr[SIZE]  = {1,2,3,4,5,6,7,9,8};
    int q;

    printf("Enter number to search for in array : ");
    scanf("%d", &q);

    for (int i = 0; i < SIZE; i++)
    {
        if(q  == arr[i])
        {
            printf("The index of %d in %d", q, i);
        }
    }
    


    return 0;
}
