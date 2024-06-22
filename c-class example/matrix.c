// Matrix Multiplication 2*2
#include<stdio.h>
#include<conio.h>
int main()
{
    int A[3][3],B[3][3],multiply[3][3];
    int i,j,k;
    printf("Enter the element of matrix A = ");
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&A[i][j]);
           printf("%d\t",A[i][j]);
        } printf("\n");
    }
    printf("\nEnter the element of matrix B = ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&B[i][j]);
           printf("%d\t",B[i][j]);
        //    multiply[i][j]=A[i][j]*B[i][j];
        } printf("\n");
    }
    printf("Multiply A*B :-\n");
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        {
           for(k=0;k<3;k++);
           {
              multiply[i][j]=A[k][j]*B[j][k];
            //   printf("%d\t",multiply[i][j]);
           }  printf("%d\t",multiply[i][j]);
         } printf("\n");
    }
    // printf("\nMatrix multipication A*B :-\n");
    /* for(i=0;i<2;i++) 
    {
        for(j=0;j<2;j++)
        {
        //    scanf("%d",&A[i][j]);
           printf("%d\t",multiply[i][j]);
        } printf("\n");
    } */
    getch();
    return 0;

}