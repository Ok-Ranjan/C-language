// print a given number without its last digit
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("given number is %d (without its last digit)",a/10);
    getch();
    return 0;
}