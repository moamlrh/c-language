#include  <stdio.h>
#include <time.h>

void swap(int* a, int* b){
    printf("\nswaping...\n");
    sleep(1);
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int a =1, b=3;
    printf("\nbefore\nvalue of a is %d\nvalue of b is %d\n", a,b);
    swap(&a,&b);
    printf("\nafter\nvalue of a is %d\nvalue of b is %d\n", a,b);
    return 0;
}
