/* calculate sum of cubes of first N natural numbers  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        printf("%d ",i*i*i);
        sum=sum+i*i*i;
    }
    printf("\nSum of first %d natural numbers = %d",n,sum);
    getch();
    return 0;
    
}