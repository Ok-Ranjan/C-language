// Take the amount in INR and convert it into USD(1 USD = 84.23 INR.
#include<stdio.h>
#include<conio.h>
int main()
{
    float inr,usd;
    printf("Enter the amount in INR: ");
    scanf("%f",&inr);
    usd=inr/84.23;
    printf("Price of INR %.1f is USD %.3f ",inr,usd);
    getch();
    return 0;
}