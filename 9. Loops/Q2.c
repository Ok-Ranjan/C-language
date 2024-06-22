/* calculate sum of first N even natural numbers  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("%d ",2*i);
        sum=sum+i*2;
    }
    printf("\nSum of first %d natural numbers = %d",n,sum);
    getch();
    return 0;
    
}