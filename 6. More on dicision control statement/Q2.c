/*  Takes the cost price and selling price of a product from the user.
    Now calculate and print profit or loss percentage. */
#include<stdio.h>
#include<conio.h>
int main()
{
    float cp,sp,cal;
    printf("Enter the cost price of product: ");
    scanf("%f",&cp);
    printf("Enter the sellin price of product: ");
    scanf("%f",&sp);
    cal=sp-cp;
    if(sp-cp>=0)
       printf("Profit = %.1f rs\nProfit(%%) = %.1f%%",sp-cp,(sp-cp)/cp*100);
    else
       printf("Loss = %.1f rs\nLoss(%%) = %.1f%%",cp-sp,(cp-sp)/cp*100);
    return 0;
}
