#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i; 
    printf("Enter number to loop :");
    scanf("%d",&i);
    while (i >= 0)
    {
        printf("\t\tYour %d Loop\n", i);
        i--;
    }
    
}