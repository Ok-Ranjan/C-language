/*1.Write a programe to calculate the sum of two matrices each of order 3✕3.*/
#include<stdio.h>

void sumOfTwoMat(int row,int col,int A[][col],int B[][col]){
    int C[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%2d ",C[i][j]);
        }
        printf("\n");
    }
    // return C;
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
    printf("Sum of Matrices is:-\n");
    sumOfTwoMat(3,3,A,B);
}