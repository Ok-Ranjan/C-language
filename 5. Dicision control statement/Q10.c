// greatest among three given numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
        printf("Greater number is %d",a);
    else if(b>=c)
        printf("Greater number is %d",b);
    else
        printf("Greater number is %d",c);
    getch();
    return 0;
}