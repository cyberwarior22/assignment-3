//1. Write a program to check whether a given number is positive or non positive
#include<stdio.h>
int main()
{ 
    int x;
	printf("enter no.");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("no.is positive");
	}
	
	else
	{
		printf("it is a negative number");
	}
	return 0;
}

