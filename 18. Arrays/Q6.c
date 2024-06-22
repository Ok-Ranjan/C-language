/*6.Write a program to sort elements of an array of size 10.Take array values from the user.*/
#include<stdio.h>
void sort();
int main(){
    int A[10],s=10;
    printf("Enter 10 numbers: ");
    for(int i=0;i<s;i++){
        scanf("%d",&A[i]);
    }
    printf("Before sorting, Array:-\n");
    for(int i=0;i<s;i++){
        printf("%d ",A[i]);
    }
    //sorting
    int maxIn=0,maxNum;
    for(int j=s-1;j>=0;j--){
        maxIn=0; //initialize maxIn before comparing elements
        //find index of largest number 
        for(int k=1 ;k<=j;k++){
            if(A[k]>A[maxIn])
                maxIn=k;
        }
        //swap value of lastIndex into maxIn
        maxNum=A[maxIn];
        A[maxIn]=A[j];
        A[j]=maxNum;
    }
    printf("\nAfter sorting, Array:-\n");
    for(int i=0;i<s;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    // sort_bouble();
    return 0;
}

//----OR-----

void sort_bouble(){
    int A[10],s=10,temp;

    for(int i=0;i<s;i++){
        scanf("%d",&A[i]);
    }

    for(int r=1;r<=9;r++){
        for(int j=0;j<=9-r;j++){
            if(A[j]>A[j+1]){
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