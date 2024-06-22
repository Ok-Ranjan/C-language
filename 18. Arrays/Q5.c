/*5.Write a program to find the smallest number stored in an array of size 10.Take array values from the user.*/
#include<stdio.h>

int main(){
    int arr[10],s=10,minIn=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<s;i++){
        if(arr[i]<arr[minIn])
            minIn=i;
    }
    printf("Smallest numbers = %d",arr[minIn]);
    return 0;
}