/*1.Write a program to calculate the sum of numbers stored in an array of size 10.Take array values from the user.*/
#include<stdio.h>

int main(){
    int arr[10],s=10,sum=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<s;i++){
        sum+=arr[i];
    }
    printf("Total sum = %d",sum);
    return 0;
}