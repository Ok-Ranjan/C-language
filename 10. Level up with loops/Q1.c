//Find the Nth terms of the Fibonacci series.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a=-1,b=1,sum;
    printf("Enter the Nth term of Fibonacci series: ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        sum=a+b;
        a=b; 
        b=sum;
    }
    printf("%d Term is %d ",n,sum);
    return 0;
}