#include <stdio.h>

void main()
{
    FILE *fptr;
    fptr = fopen("newFile.txt", "a");
    fprintf(fptr, "%s", "Your text is here\n");
}