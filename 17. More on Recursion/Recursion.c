#include<stdio.h>
/*1. Write a recursive function to calculate sum of first N natural numbers*/
int sum_Nnum(int n){
    if(n==1)
        return 1;
    return n+sum_Nnum(n-1);
}
/*2. Write a recursive function to calculate sum of first N odd natural numbers*/
int sumOddNum(int n){
    if(n==1)
        return 1;
    return sumOddNum(n-1)+(n*2-1);
}

/*3. Write a recursive function to calculate sum of first N even natural numbers*/
int sumEvenNum(int n){
    if(n==1)
        return 2;
    return (2*n)+sumEvenNum(n-1);
}

/*4. Write a recursive function to calculate sum of square of first n natural numbers*/
int sum_squareNum(int n){
    if(n==1)
        return 1;
    return (n*n)+sum_squareNum(n-1);
}

/*5. Write a recursive function to calculate sum of digits of a given number*/
int sumOfdigits(int num){
    if(num==0)
        return 0;
    return sumOfdigits(num/10)+(num%10);
}

/*6. Write a recursive function to calculate factorial of a given number*/
int getFactorial(int num){
    if(num==0)
        return 1;
    return num*getFactorial(num-1);
}

/*7. Write a recursive function to calculate HCF of two numbers*/
//------method->1
int calHCF(int num1,int num2,int i){
    if(num1!=1 || num2!=1){
        if(num1%i==0 && num2%i==0)
            return calHCF(num1/i,num2/i,i)*i;
        else if(num1%i==0)
            return calHCF(num1/i,num2,i);
        else if(num2%i==0)
            return calHCF(num1,num2/i,i);
        else{
            i++;
            return calHCF(num1,num2,i);
        }
    }
    return 1; //(num1%i*num2%i)
}
int getHCF(int num1,int num2){
    int i=2;
    return calHCF(num1,num2,i);
}
//-------method->2(using Euclid's theorem or algorithm)
int hcf_Euclid(int a,int b){
    if(a>b){
        if(a%b==0)
            return b;
        else
            return hcf_Euclid(a%b,b);
    }
    else{
        if(b%a==0)
            return a;
        else
            return hcf_Euclid(a,b%a);
    }
}

/*8. Write a recursive function to print first N terms of Fibonacci series*/
int getNfib(int n){
    if(n>1)
        return getNfib(n-2)+getNfib(n-1);
    return n;
}
void printNfib(int n){
    if(n==0)
        printf("%d ",n);
    else{
        printNfib(n-1);
        printf("%d ",getNfib(n));
    }
}

/*9. write a program in C to count the digits of a given number using recursion.*/
int count_digits(int n){
    if(n==0)
        return 0;
    return count_digits(n/10)+1;
}
int Add_Digits(int num){  //SUM OF given digits
    if(num>9){
        return Add_Digits(num/10)+num%10;
    }
    return num;
}

/*10. write a program in C to calculate the power of any number using recursion.*/
float calPower(float num,float pow){
    if(pow==0)
        return 1;
    if(pow>0)
        return calPower(num,pow-1)*num;
    if(pow<0)
        return calPower(num,pow+1)/num;
} 

int main(){
    int x;
    // printf("HCF is %d\n",getHCF(32,88));
    // printf("HCF is %d",hcf_Euclid(32,88));
    // printNfib(10);
    printf("%f",calPower(2,-5));
    return 0;
}