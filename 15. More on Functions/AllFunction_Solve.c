#include<stdio.h>
#include<conio.h>
//declaretion
int cal_LCM(int,int);
int cal_LCM2(int,int);
int cal_HCF(int,int);
int isPrimeNum(int);
int F_NextPrimeNum(int);
int F_NextPrimeNum2(int);
void P_NPrimeNum(int);
void P_PrimeNum_Bet2Num(int,int);
void P_NFiboSeries(int);

/*1.Write a function to calculate LCM of two numbers.(TSRS)*/
//LCM->Lowest Common Multiple
int cal_LCM(int a,int b)
{
    // First method
    int i=2,mul=1;
    while(a>1||b>1)
    {
        if(a%i==0 || b%i==0)
        {
            if(a%i==0)
                a/=i;
            if(b%i==0)
                b/=i;
            mul*=i;
        }
        else
            i++;
    }
    return mul;
}
int cal_LCM2(int a, int b)
{
    // second method
    int i=2,mul=1;
    while(a>1||b>1)
    {
        if(a%i==0&&b%i==0)
        {
            a/=i;
            b/=i;
            mul*=i;
        }
        else if(a%i==0)
        {
            a/=i;
            mul*=i;
        }
        else if(b%i==0)
        {
            b/=i;
            mul*=i;
        }
        else
            i++;
    }
    return mul;
}
int cal_LCM3(int a, int b){
    // third method
    int L;
    for(L=a>b?a:b;L<=a*b;L++){
        if(L%a==0&&L%b==0)
            return L;
    }
}

/*2.Write a function to calculate HCF of two numbers. (TSRS)*/
// Highest Common Factor
int cal_HCF(int a,int b)
{
    int i=2,mul=1;
    while(a>1||b>1)
    {
        if(a%i==0&&b%i==0)
        {
            a/=i;
            b/=i;
            mul*=i;
        }
        else if(a%i==0)
            a/=i;
        else if(b%i==0)
            b/=i;
        else
            i++;
    }
    return mul;
}
int cal_HCF2(int a,int b){
    int h;
    for(h=a<b?a:b ; h>=1; h--){
        if(a%h==0 && b%h==0)
            return h;
    }
}

/*3.Write a function to check whether a given number is Prime or not.(TSRS)*/
int isPrimeNum(int a)
{
    if(a==1)
        return 0;
    for(int i=2;i<a;i++)
        if(a%i==0)
            return 0;
    return 1;
}

/*4.Write a function to find the next prime number of a given number.(TSRS)*/
int F_NextPrimeNum(int a)
{
    int checkPrim;
    for(int nextNum=a+1;1;nextNum++){
        checkPrim=1;
        for(int i=2;i<nextNum;i++){
            if(nextNum%i==0){
                checkPrim=0;
                break;
            }
        }
        if(checkPrim)
            return nextNum;
    }
    return 2;
}
int F_NextPrimeNum2(int a)
{
    while(!isPrimeNum(++a));
        return a;
}

/*5.Write a function to print first N prime numbers(TSRN)*/
void P_NPrimeNum(int n)
{
    int num=2;
    while(n){
        if(isPrimeNum(num)){
            printf("%d ",num);
            n--;
        }
        num++;
    }
        //OR
    /*
    while(n){
        printf("%d ",num);
        num=F_NextPrimeNum2(n);
        n--;
    }*/
}

/*6.Write a function to print all prime number between two given numbers.(TSRN)*/
void P_PrimeNum_Bet2Num(int a,int b)
{
    for(int i=a+1;i<b;i++)
        if(isPrimeNum(i))
            printf("%d ",i);
}

/*7.Write a function to print first N terms of Fibonacci series(TSRN)*/
void P_NFiboSeries(int n)
{
    int i=-1,j=1,fib;
    for(int k=1;k<=n;k++){
        fib=i+j;
        printf("%d,",fib);
        i=j;
        j=fib;
    }
}

/*8. Write a function to print PASCAL Triangle.(TSRN)*/
long int fact(int n)
{
    long int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}
void print_pascal(int n){
    int i,j,k,r;
    for(i=1;i<=n;i++){
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++){
            if(j>=n+1-i&&j<=n-1+i){
                if(k)
                    printf("%2d",combi(i-1,r++));
                else
                    printf("  ");
                k=1-k;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

/*9. Write a function to print all Armstrong numbers between two given numbers.*/
int digitPower(int num,int n){
    int x,P=1;
    x=num%10;
    for(int i=1;i<=n;i++){
        P=P*x;
    }
    return P;
}
int NumOfDigit(int num){
    int x=0;
    while(num){
        num/=10;
        x++;
    }
    return x;
}
void P_ArmstrongNum(int a, int b){
    for(int i=a;i<b;i++){
        int I,Ndigit,addCal=0;
        Ndigit=NumOfDigit(i);
        for(int I=i,j=1;j<=Ndigit;j++){
            addCal=addCal+digitPower(I,Ndigit);
            I/=10;
        }
        if(addCal==i)
            printf("%d ",i);
    }
}

/*10. Write a function to find the sum of first N terms of the series 
        1!/1+2!/2+3!/3+4!/4+5!/5...n!/n (TSRS)*/
int giveFact(int a){
    int fact=1;
    for(int i=a;i>0;i--)
        fact=fact*i;
    return fact;
}
int sumOfseries(int n){
    int sum=0;
    while(n){
        sum=sum+giveFact(n)/n;
        n--;
    }
    return sum;
}

int main()
{
    // int n1,n2;
    // printf("Enter 1 Numbers: ");
    // scanf("%d%d",&n1,&n2);
    // printf("%d",sumOfseries(5));
    print_pascal(8);
    return 0;
}