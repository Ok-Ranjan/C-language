//Calculate simple interest
#include<stdio.h>
#include<conio.h>
int main()
{
    int rs,rate,time;
    float interest;
    printf("Enter the Principle Amount(P): ");
    scanf("%d",&rs);
    printf("Enter the Rate(R): ");
    scanf("%d",&rate);
    printf("Enter the Time(t): ");
    scanf("%d",&rs);
    interest=(rs*rate*time)/100;
    printf("Simpe Interest(S.I): %f",interest);
    getch();
    return 0;
   
}