#include <stdio.h>
#include <stdlib.h>

void main()
{

    float num1, num2, result;
    char oprator;
    printf("Enter your first number : ");
    scanf("%f", &num1);

    printf("\nEnter Operator : ");
    scanf(" %c", &oprator);

    printf("\nEnter You 2nd number : ");
    scanf(" %f", &num2);
    switch (oprator)
    {
    case '+':
        result = num1 + num2;
        printf("%.1f + %.1f = %.2f\n", num1,num2,result);
        break;
   case '-':
        result = num1 - num2;
        printf("%.1f - %.1f = %.2f\n", num1,num2,result);
        break;
    default:
        printf("Error with your fucking operator !\n");
        break;
    } 
}