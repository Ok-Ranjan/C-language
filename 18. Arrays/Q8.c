/*8.Write a program to find the second smallest number in an array.Take array values from the user.*/
#include<stdio.h>

int main(){
    int arr[10],s=10,min,second_min;
    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    if(arr[0]<arr[1]){
        min=arr[0];
        second_min=arr[1];
    }
    else{
        min=arr[1];
        second_min=arr[0];
    }
    for(int i=2;i<s;i++){
        if(arr[i]<min){
            second_min=min;
            min=arr[i];
        }
        else{
            if(arr[i]<second_min)
                second_min=arr[i];
        }
    }

    printf("Second smallest Number= %d",second_min);
    return 0;
}