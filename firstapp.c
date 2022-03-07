#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/socket.h>

void main(void){
    double x = sqrt(2.0);
    printf("x is = %f", x);
    for (int i = 0; i < 10; i++)
    {
        printf("\ni is = %d\n", i);
    }
}