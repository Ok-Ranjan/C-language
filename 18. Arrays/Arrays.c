#include<stdio.h>
/*1.Write a program to calculate the sum of numbers stored in an array of size 10.Take array values from the user.*/
int sumOfNumbers(int A[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=A[i];
    }
    return sum;
}
/*2.Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.*/
int AverageOfNums(int A[],int size){
    int aver=0;
    aver=sumOfNumbers(A,size)/size;
    return aver;
}
/*3.Write a program to calculate the sum of all even numbers and sum of all odd numbers,
which are stored in array of size 10. Take array values from user.*/
void calSumEvenOrOdd(int A[],int size){
    int sumE=0,sumO=0;
    for(int i=0;i<size;i++){
        if(A[i]%2==0)
            sumE+=A[i];
        else
            sumO+=A[i];
    }
    printf("Sum of even = %d",sumE);
    printf("Sum of odd = %d",sumO);
}
/*4.Write a program to find the greatest number stored in an array of size 10.
Take array values from the user.*/
int greatestNum(int A[],int s){
    int maxIndex=0;
    for(int i=1;i<s;i++){
        if(A[i]>A[maxIndex])
            maxIndex=i;
    }
    return maxIndex; //Index number return
}
/*int greatestNum(int A[],int s,int Gnum){
    if(s>0){
        int G=greatestNum(A,s-1);
        if(Gnum<G){
            Gnum=G;
        }
    }
    return Gnum;
}*/

/*5.Write a program to find the smallest number stored in an array of size 10.Take array values from the user.*/
int smallestNum(int A[],int s){
    int minIndex=0;
    for(int i=0;i<s;i++){
        if(A[i]<A[minIndex])
            minIndex=i;
    }
    return minIndex; //index number return
}

/*6.Write a program to sort elements of an array of size 10.Take array values from the user.*/
void sortArray(int A[],int s){
    int large; //index
    int lValue; //value
    for(int i=s-1;i>=0;i--){
        large=greatestNum(A,i+1);
        lValue=A[large];
        A[large]=A[i];
        A[i]=lValue;
    }
}

/*7.Write a program to find second largest in an array.Take array values from the user.*/
int secondLarge(int A[],int s){
    int secMaxIn=0,maxIn;
    maxIn=greatestNum(A,s);
    for(int i=1;i<s;i++){
        if(A[i]>A[secMaxIn] && i!=maxIn)
            secMaxIn=i;
    }
    return secMaxIn; //Index num. return
}

/*8.Write a program to find the second smallest number in an array.Take array values from the user.*/
int secondSmall(int A[],int s){
    int secMinIn=0,minIn;
    minIn=smallestNum(A,s);
    for(int i=1;i<s;i++){
        if(A[i]<A[secMinIn] && i!=minIn)
            secMinIn=i;
    }
    return secMinIn; //Index num. return
}
/*9.Write a program to sort an array of 10 elements in descending order.*/
void sortArrayInDes(int A[],int s){
    int small; //index
    int sValue; //value
    for(int i=s-1;i>=0;i--){
        small=smallestNum(A,i+1);
        sValue=A[small];
        A[small]=A[i];
        A[i]=sValue;
    }
}

/*10.Write a program in C to copy the elements of one array into another array.Take array values from the user.*/
void copyArray(int A[],int B[],int s){
    for(int i=0;i<s;i++){
        B[i]=A[i];
    }
}


int main(){
    int arr[10]={62,6,43,23,65,8,32,1,4,22};
    // int index=secondSmall(arr,10);
    // printf("%d",arr[index]);
    sortArrayInDes(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}