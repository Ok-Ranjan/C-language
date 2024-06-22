// print greater between two number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    (a>=b)?printf("Greater number is %d",a):printf("Greater number is %d",b);
    getch();
    return 0;
}