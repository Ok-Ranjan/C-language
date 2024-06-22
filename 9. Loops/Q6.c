/* calculate Factorial of a number  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for (i=n;i;i--)
    {
       fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    getch();
    return 0;
    
}