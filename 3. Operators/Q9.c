// Swap values of two int variable without using third variable And Arithmetic operators
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Befor swapping:-\n");
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping:-\n");
    printf("value of a=%d\tb=%d",a,b);
    getch();
    return 0;
}