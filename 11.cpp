#include <stdio.h>
int main()
{
int a , b ,c , d , e , total ;
printf("enter marks for first subject out of 100 : ");
scanf("%d", &a);
printf("enter marks for second subject out of 100 : ");
scanf("%d", &b);
printf("enter marks for third subject out of 100 : ");
scanf("%d", &c);
printf("enter marks for fourth subject out of 100 : ");
scanf("%d", &d);
printf("enter marks for fifth subject out of 100 : ");
scanf("%d", &e);
total = a + b + c + d + e ;
printf("\nPassing marks for each subject is 33\n");
if (a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
{
if(total>=165)
printf("\nStudent has passed the exam\n");
}
else
printf("\nStudent has failed the exam because in any of the subjects, marks is less than the passing marks\n");
return 0 ;
}




