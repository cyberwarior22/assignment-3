#include<stdio.h>
int main()
{
int a ;
printf("Enter a number : ");
scanf("%d",&a);
if(a%7==0 && a%3==0)
{
printf("\n%d is divisible by 3 and 7 \n" , a);
}
else if(a%7==0)
{
printf("\n%d is divisible by 7 \n" , a);
}
else if(a%3==0)
{
printf("\n%d is divisible by 3 \n" , a);
}
return 0 ;
}
