#include <stdio.h>
int main()
{
int n ;
printf("Enter a number : ") ;
scanf("%d", &n) ;
if(n==0)
{
printf("\nnumber is zero\n");
}
if(n>0)
{
printf("\nnumber is positive\n");
}
if(n<0)
{
printf("\nnumber is negative\n");
}
return 0 ;
}

