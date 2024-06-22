// print unit digit of a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Unit digit of a given number is %d",a%10);
    getch();
    return 0;
}