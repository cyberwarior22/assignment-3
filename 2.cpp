//2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{ 
    int x;
	printf("enter no.");
	scanf("%d",&x);
	
	if(x%5==0)
	{
		printf("it is");
	}
	else
	{
		printf("its not");
	}
	return 0;
}
	
