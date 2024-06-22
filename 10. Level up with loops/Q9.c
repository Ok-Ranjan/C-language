// Check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main(){
    int num,pow=1,sum=0,count=0,i,n,d;
    printf("Enter a number: ");
    scanf("%d",&num);
    n=num;
    //find number of digit
    while(n){
        n=n/10;
        count++;
    }
    for(n=num;n;n=n/10){
        d=n%10;
        for(pow=1,i=count; i!=0; i--)
           pow*=d;
        sum+=pow;
    }
    if(sum==num)
        printf("Yes! Given number is an Armstrong number");
    else
        printf("No! Given number is not an Armstrong number");
    return 0;
}