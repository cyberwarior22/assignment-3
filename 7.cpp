#include <stdio.h>
int main()
{
int a , b , c , D ;
printf("enter value of a : ");
scanf("%d", &a);
printf("enter value of b : ");
scanf("%d", &b);
printf("enter value of c : ");
scanf("%d", &c);
D = b*b - 4*a*c ;
if(D>0)
{
  printf("\nroots are real and distinct\n");
}
if(D<0)
{
  printf("\nroots are imaginary\n");
}
if(D==0)
{
  printf("\nroots are real and equal\n");
}
return 0 ;
}
