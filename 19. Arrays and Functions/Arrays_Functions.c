#include<stdio.h>

/*1.Write a function to find the greatest number from the given array of any size.(TSRS)*/
int greatestNum(int A[],int s){
    int maxIn=0;
    for(int i=1;i<s;i++){
        if(A[i]>A[maxIn])
            maxIn=i;
    }
    return maxIn; //index return
}

/*2.Write a function to find the smallest number from the given array of any size.(TSRS)*/
int smallestNum(int A[],int s){
    int minIn=0;
    for(int i=1;i<s;i++){
        if(A[i]<A[minIn])
            minIn=i;
    }
    return minIn; //index return
}

/*3.Write a function to sort an array of any size.(TSRN)*/
void sort(int A[],int s){
    int temp,maxIn;
    for(int i=s-1;i>0;i--){
        maxIn=greatestNum(A,i+1); //find index of largest Number
        //swaping
        temp=A[maxIn];
        A[maxIn]=A[i];
        A[i]=temp;
    }
}

/*4.Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right.(For example, if array of size 5 is [32,29,40,12,70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40,12,70,32,29]).*/
void rotation(int A[],int s/*Size*/,int n/*position*/,char d/*direction*/){
    int temp,i,j;
    //left rotation
    if(d=='l'){
        for(i=1;i<=n;i++){
            temp=A[0];
            for(j=0;j<s-1;j++){
                A[j]=A[j+1];
            }
            A[j]=temp;
        }
    }
    else if(d=='r'){  //Right rotation
        for(i=1;i<=n;i++){
            temp=A[s-1];
            for(j=s-1;j>0;j--){
                A[j]=A[j-1];
            }
            A[j]=temp;
        } 
    }
    else{
        printf("please give correct direction\nfor left -> l\nfor right -> r\n");
    }
}

/*5.Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
int firstAdjDupVal(int A[],int s){
    int i;
    for(i=0;i<=s-2;i++){
        if(A[i]==A[i+1])
            return A[i];
    }
    return -1;
}

/*6.Write a function to swap two elements of given array with specified indices.*/
void swap(int A[],int i1,int i2){
    int t;
    //swapping
    t=A[i1];
    A[i1]=A[i2];
    A[i2]=t;
}

/*7.Write a function to count a total number of duplicate elements in an array.
(Means element that occurs 2 times in an array)*/
int countDupEle_1(int A[],int s){
    int count=0;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(j!=i){
                if(A[i]==A[j]&&j<i)
                    break;
                if(A[i]==A[j]){
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}
int count_duplicate(int A[],int size){
    int i,j,count=0;
    sort(A,size);
    i=0;
    j=1;
    while(i<=size-2){
        if(A[i]==A[j])
            count++;
        while(A[i]==A[j])
            j++;
        i=j;
        j=j+1;
    }
    return count;
}
/*8.Write a function to print all unique elements in an array.*/
void PrintUniqueEle(int A[],int s){
    int isDup;
    for(int i=0;i<s;i++){
        isDup=0;
        for(int j=0;j<s;j++){
            if(A[i]==A[j]&&j!=i){
               isDup=1;
               break;
            }
        }
        if(isDup==0)
            printf("%d ",A[i]);
    }
}
void all_uniqueEle(int A[],int size){
    int i,j;
    sort(A,size);
    i=0;
    j=1;
    while(i<=size-1){
        printf("%d ",A[i]);
        while(A[i]==A[j])
            j++;
        i=j;
        j=j+1;
    }
}

/*9.Write a function to merge two arrays of the same size sorted in  descending order.*/
void merge(int A[],int B[],int size){
    int C[size*2],k=0,i=0,j=0;

    while(i<=size-1&&j<=size-1){
        if(A[i]>B[j]){
            C[k]=A[i];
            i++;
        }
        else{
            C[k]=B[j];
            j++;
        }
        k++;
    }
    if(i==size){
        while(j<=size-1){
            C[k]=B[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=size-1){
            C[k]=A[i];
            i++;
            k++;
        }
    }

    //print merge array
    for(int i=0;i<size*2;i++){
        printf("%d ",C[i]);
    }
    //you can return this array
}
/*10.Write a function to count the frequency of each element of an array.*/
void countFrequency(int A[],int s){
    int count,i,j;
    for(i=0;i<s;i++){
        count=0;
        for(j=0;j<s;j++){
            if(A[i]==A[j]){
                if(j<i)
                    break;
                else
                    count++;
            }
        }
        if(j==s)
            printf("Fre. of %d -> %d\n",A[i],count);
    }
}
void count_frequency(int A[],int size){
    int i,j,count;
    sort(A,size);
    i=0;
    j=1;
    while(i<=size-1){
        count=0;
        printf("%d ",A[i]);
        while(A[i]==A[j])
            j++;
        printf("- %d\n",j-i);
        i=j;
        j=j+1;
    }
}

int main(){
    // int arr[]={10,50,14,13,10,60,50,50,18,18};
    int arr1[]={12,7,4,3,0};
    int arr2[]={23,18,11,8,2};
    merge(arr1,arr2,5);
    // int A[]={10,50,14,13,10,60,50,50,18,18,18};
    // int size=sizeof(arr)/sizeof(int);
    // int sA=sizeof(A)/sizeof(int);
    // // merge(arr,arr2,size);
    // // countFrequency(A,sA);
    // rotation(A,sA,2,'l');
    // for(int i=0;i<sA;i++){
    //     printf("%d ",A[i]);
    // }
    // countFrequency (A,11);
}