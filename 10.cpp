#include <stdio.h>
int main()
{
    float CP , SP , profit , loss , profit_per , loss_per ;
    printf("Enter the cost price of the product : ");
    scanf("%f",&CP);
    printf("Enter the selling price of the product : ");
    scanf("%f" , &SP);
    profit = SP - CP ;
    loss = CP - SP ;
    profit_per = ( profit * 100 ) / CP ;
    loss_per = ( loss * 100 ) / CP ; 
    if( SP > CP )
    printf("The total profit percentage is %f " , profit_per);
    else
    printf("The total loss percentage is %f " , loss_per);
    return 0 ;
}
