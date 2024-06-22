//reverse a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,y=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num)
    {
        y=y*10+num%10;
        num=num/10;
    }
    printf("Revers = %d",y);
    getch();
    return 0;
}