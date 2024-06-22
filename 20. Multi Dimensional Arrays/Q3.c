/*3.Write a program to print the transpose of a given matrix.*/
#include<stdio.h>

void transOfMatrix(int row,int col,int M[][col]){
    int i,j,k,temp;
    for(i=0,j=1,k=1;k<=row;k++){
        temp=M[i][j];
        M[i][j]=M[j][i];
        M[j][i]=temp;
        if(j-i==1)
            j++;
        else
            i++;
    }
    //printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d  ",M[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int A[3][3],i,j;
    printf("Enter 9 elements of Matrix: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("Transpose of Matrix is:-\n");
    transOfMatrix(3,3,A);
    return 0;
}