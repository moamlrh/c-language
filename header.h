#include <stdio.h>

#ifndef __HEADER__H__
#define __HEADER__H__


int sumNumbers(int a, int b, ...)
{
    printf("Hello World From Header.H file !");
    return a + b;   
}

#endif //!__HEADER__H__