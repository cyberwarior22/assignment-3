#include<stdio.h>
int main () {
    int a , b , c ;
    printf("Enter the sides of the triangle : ");
    scanf("%d%d%d" , &a , &b , &c ) ;
    if(a==0 || b==0 || c==0)
    printf("\nthe triangle is not valid because it's one side is zero\n");
    else if( (a+b)>c && (a+c)>b && (b+c)>a )
    printf("\nthe triangle is valid\n");
    else
    printf("\nthe triangle is not valid\n");
    return 0 ;
}
