// Swap value of two int variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Befor swapping:-\n");
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:-\n");
    printf("value of a=%d\tb=%d",a,b);
    getch();
    return 0;
}