// swap values of two int variables in single line arithmetic expression
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
    a=a+b-(b=a);
    printf("After swapping:-\n");
    printf("value of a=%d\tb=%d",a,b);
    getch();
    return 0;
}