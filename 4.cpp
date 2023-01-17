//. Write a program to check whether a given number is an even number or an odd
//number without using % operator.

#include<stdio.h>
int main()
{ 
    int x;
	printf("enter no");
	scanf("%d",&x);
	
	if(x%2==0)
	{
		printf("it is even");
	}
	else
	{
		printf("its odd");
	}
	return 0;
}

