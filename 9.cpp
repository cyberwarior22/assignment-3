#include <stdio.h>
int main()
{
int a , b , c ;
printf("enter values of a and b and c : ");
scanf("%d%d%d" , &a , &b , &c );
if(a>b && a>c)
{
printf("\n%d is greater than %d and %d\n", a,b,c);
}
if(b>a && b>c)
{
printf("\n%d is greater than %d and %d\n", b,a,c);
}
if(c>a && c>b)
{
printf("\n%d is greater than %d and %d\n", c,a,b);
}
if(a==b&&b==c)
{
printf("\nall values are equal : %d\nplease select different values\n" , a);
}
if(a==b && a>c)
printf("\ntwo values are equal : %d\nand is greater than %d\n" , a , c);
if(a==c && a>b)
printf("\ntwo values are equal : %d\nand is greater than %d\n" , a , b);
if(c==b && c>a)
printf("\ntwo values are equal : %d\nand is greater than %d\n" , c , a);
return 0 ;
}

