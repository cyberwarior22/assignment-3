//5. Write a program to check whether a given number is a three digit number or not.

#include <stdio.h>
int main()
{
int n ;
printf("enter a number : ");
scanf("%d" , &n);
if(n>=100 && n<=999)
printf("%d is a three digit number\n" , n);
else
printf("%d isn't a three digit number\n" , n);
return 0 ;
}


