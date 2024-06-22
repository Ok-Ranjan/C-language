// Input a three digit number and display the sum of digit
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,sum;
    printf("Enter a three digit number: ");
    scanf("%d",&x);
    sum=/*First digit*/x/100+
        /*Second digit*/(x/10)%10+
        /*Third digit*/(x%100)%10;
    printf("Sum of digit is %d",sum);
    getch();
    return 0;
}