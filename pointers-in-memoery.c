#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char *name ;
    name = "Hello, world! hellow world again" ;
    char str = 'x';
    char *cp;
    cp = &str;
    printf("%d\n", str);
    printf("%p\n", cp);
    printf("%p\n", &str);
    printf("%p\n", &cp);
    int x = strlen(name);
    printf("x = %d\n", x);
    printf("first char from name is %p\n", &name[0]);
    printf("size of int is %ld\n", sizeof(int));
    printf("size of char is %ld\n", sizeof(char));
    printf("size of float is %ld\n", sizeof(float));
    printf("char 1 of name is %d and position is %p\n", name[0], &name[0]);
    printf("char 1 of name is %d and position is %p\n", name[1], &name[1]);
    printf("char 1 of name is %d and position is %p\n", name[2], &name[2]);
    printf("char 1 of name is %d and position is %p\n", name[3], &name[3]);
    printf("char 1 of name is %d and position is %p\n", name[4], &name[4]);

    return 0;
}
