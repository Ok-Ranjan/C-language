/*9.Write a program to sort an array of 10 elements in descending order.*/
#include<stdio.h>

int main(){
    int A[10],s=10,temp;

    for(int i=0;i<s;i++){
        scanf("%d",&A[i]);
    }

    for(int r=1;r<=9;r++){
        for(int j=0;j<=9-r;j++){
            if(A[j]<A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        printf("%d ",A[i]);
    }
}