/*input a number from the user and also input a digit.
 Append the digit in the number and print the resulting number */
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter a digit: ");
    scanf("%d",&y);
    printf("resulting number = %d",x*10+y);
    getch();
    return 0;
}