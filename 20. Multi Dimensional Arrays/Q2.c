/*2.Write a program to calculate the product of two matrices each of order 3×3.*/
#include<stdio.h>
void productOfMatrices(int row,int col,int A[][col],int B[][col]){
    int C[row][col];
    int i,j,k,sum;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            for(k=0,sum=0;k<3;k++){
                sum+=(A[i][k]*B[k][j]);   
            }
            C[i][j]=sum;
            printf("%d  ",sum);
        }
        printf("\n");
    }
}  
int main(){
    int A[3][3],B[3][3],i,j;
    printf("Enter 9 elements of first Matrix: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 9 elements of second Matrix: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    printf("Product of Matrices is:-\n");
    productOfMatrices(3,3,A,B);
}