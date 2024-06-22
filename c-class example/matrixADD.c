#include<stdio.h>
#include<conio.h>
int main()
{
    int a[2][2],b[2][2],sum[2][2];
    int i,j;
    printf("Enter the element of matrix-A(2*2) :");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2 ;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element of matrix-B(2*2) :");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2 ;j++)
        {
            scanf("%d",&b[i][j]);
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two matrix A(2*2) + b(2*2):-\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2 ;j++)
        {
            sum[i][j]=0;
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}