#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int ch;
    FILE *pr;    
    pr = fopen("file.txt", "r");
    ch = getc(pr);
    
    while (ch != EOF)
    {
        printf("%c", ch);
        putchar();
        ch = getc(pr);
    };

    printf("\n%d\n", ch);

    fclose(pr);
    
    return 0;
}
