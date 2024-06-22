/*10.Write a program in C to copy the elements of one array into another array.Take array values from the user.*/
#include<stdio.h>

int main(){
    int A[10],B[10],s=10;

    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&A[i]);
    }
//coping
    for(int j=0;j<s;j++){
        B[j]=A[j];
    }

    printf("Array(A):-\n");
    for(int i=0;i<s;i++){
        printf("%d ",A[i]);
    }
    printf("\nCopied Array(B):-\n");
    for(int i=0;i<s;i++){
        printf("%d ",B[i]);
    }
    return 0;
}