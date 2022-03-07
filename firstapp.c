#include <stdlib.h>
#include <stdio.h>

void main()
{
    int num;
    printf("Enter your number : ");
    scanf("%d", &num);
    if(num > 2){
        printf("Your number is %d greated than 2, Your suck !\n", num);
    }else if (num < 2)
    {
        printf("Your number is %d lesser then 2, Your not suck !\n", num);
    }
    else { 
        printf("Your number is %d and it's equal to itself I mean it equal to 2 !\n", num);
    }
}