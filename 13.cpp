#include<stdio.h>
int main()
{
int a ;
printf("Enter a number : ");
scanf("%d",&a);
if(a%3==0 && a%2==0)
{
printf("\n%d is divisible by 3 and 2 \n" , a);
}
else
{
printf("\n%d isn't divisible by 3 and 2 \n" , a);
}
return 0 ;
}
