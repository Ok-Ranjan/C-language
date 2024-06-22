/*7.Write a program to find second largest in an array.Take array values from the user.*/
#include<stdio.h>

int main(){
    int arr[10],s=10,max,second_max;
    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1]){
        max=arr[0];
        second_max=arr[1];
    }
    else{
        max=arr[1];
        second_max=arr[0];
    }
    for(int i=2;i<s;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        else{
            if(arr[i]>second_max)
                second_max=arr[i];
        }
    }

    printf("Second largest Number= %d",second_max);
    return 0;
}