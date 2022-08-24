#include <stdlib.h>
#include <stdio.h> 

int main(){ 
  int x =10; // variable
  int *xp = &x; // pointer to variable 
  int **xpp = &xp; // double pointer : pointer to pointer 

  printf("&x = %p\n", &x); // address of x
  printf("&xp = %p\n", &xp); // address of xp
  printf("&xpp = %p\n", &xpp);// address of xpp 

  printf("\n");

  printf("x = %d  ==> value in x\n", x);
  printf("xp = %p   ==> address of x\n", xp);
  printf("xpp = %p   ==> address of xp\n", xpp);

}
