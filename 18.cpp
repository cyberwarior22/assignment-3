#include<stdio.h>
int main () {
    int n ;
    printf("Enter month number to know number of days in it : ") ;
    scanf("%d" , &n) ;
    if(n>12 || n<1)
    printf("Invalid Choice\n") ;
    else if(n == 1)
    printf("Number of days - 31\n") ;
    else if(n == 2)
    printf("Number of days - 28\n") ;
    else if(n == 3)
    printf("Number of days - 31\n") ;
    else if(n == 4)
    printf("Number of days - 30\n") ;
    else if(n == 5)
    printf("Number of days - 31\n") ;
    else if(n == 6)
    printf("Number of days - 30\n") ;
    else if(n == 7)
    printf("Number of days - 31\n") ;
    else if(n == 8)
    printf("Number of days - 31\n") ;
    else if(n == 9)
    printf("Number of days - 30\n") ;
    else if(n == 10)
    printf("Number of days - 31\n") ;
    else if(n == 11)
    printf("Number of days - 30\n") ;
    else if(n == 12)
    printf("Number of days - 31\n") ;
    return 0 ;
}
