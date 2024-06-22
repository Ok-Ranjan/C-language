//calculate the profit or loss earned upon selling 25 bananas
#include<stdio.h>
#include<conio.h>
int main()
{
    float cost,sell,profit;
    printf("Cost price of banana per dozen: ");
    scanf("%f",&cost);
    printf("Selling price of banana per dozen: ");
    scanf("%f",&sell);
    cost=(cost/12)*25;
    sell=(sell/12)*25;
    profit=(sell-cost)/12*25;
    printf("Profit(25 bananas) = %.2f",profit);
    getch();
    return 0;

}
