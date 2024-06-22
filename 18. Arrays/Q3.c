/*3.Write a program to calculate the sum of all even numbers and sum of all odd numbers,
which are stored in array of size 10. Take array values from user.*/
#include<stdio.h>

int main(){
    int arr[10],s=10,sum_even=0,sum_odd=0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<s;i++){
        if(arr[i]%2==0)
            sum_even+=arr[i];
        else
            sum_odd+=arr[i];
    }
    printf("Sum of even = %d\n",sum_even);
    printf("Sum of odd = %d",sum_odd);
    return 0;
}