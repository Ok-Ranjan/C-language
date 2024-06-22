#include<stdio.h>

/*1. Write a recursive function to print first N natural numbers*/
void naturalNum(int n){
    if(n>0){
        naturalNum(n-1);
        printf("%d ",n);
    }
}

/*2. Write a recursive function to print first N natural numbers in reverse order*/
void naturalNum_R(int n){
    if(n>0){
        printf("%d ",n);
        naturalNum_R(n-1);
    }
}

/*3. Write a recursive function to print first N odd natural numbers*/
void oddNum(int n){
    if(n>0){
        oddNum(n-1);
        printf("%d ",n*2-1);
    }
}

/*4. Write a recursive function to print first N odd natural numbers in reverse order*/
void oddNum_R(int n){
    if(n>0){
        printf("%d ",n*2-1);
        oddNum_R(n-1);
    }
}

/*5. Write a recursive function to print first N even natural numbers*/
void evenNum(int n){
    if(n>0){
        evenNum(n-1);
        printf("%d ",n*2);
    }
}

/*6. Write a recursive function to print first N even natural numbers in reverse order*/
void evenNum_R(int n){
    if(n>0){
        printf("%d ",n*2);
        evenNum_R(n-1);
    }
}

/*7. Write a recursive function to print squares of first N natural numbers*/
void squareOfFirstN(int n){
    if(n>0){
        squareOfFirstN(n-1);
        printf("%d ",n*n);
    }
}
/*8. Write a recursive function to print binary of a given decimal number*/
void printBin(int num){
    if(num>0){
        printBin(num/2);
        printf("%d",num%2);
    }
}
/*9. Write a recursive function to print octal of a given decimal number*/
void printOct(int num){
    if(num>0){
        printOct(num/8);
        printf("%d",num%8);
    }
}
/*10. Write a recursive function to print reverse of a given number*/
void reverseNum(int num){
    if(num){
        printf("%d",num%10);
        reverseNum(num/10);
    }
}
int main(){
    printOct(132 );
    return 0;
}