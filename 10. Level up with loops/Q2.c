//Print first N terms of Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,x=-1,y=1,sum;
    printf("Enter the Nth term of Fibonacci series: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        sum=x+y;
        printf("%d ",sum);
        x=y;
        y=sum;
    }
    getch();
    return 0;
}