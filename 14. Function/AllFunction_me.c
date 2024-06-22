#include<stdio.h>

/*1-Write a function to calculate the area of circule(TSRS).*/
float Q1_areaOfCircule(int r)
{
    return 3.14*r*r;
}

/*2-Write a function to calculate simple interest.(TSRS)*/
float Q2_simpleInterest(int P,float rate,int t_yearly)
{
    return (P*rate*t_yearly)/100;
}

/*3-Write a function to check whether a given number is even or odd.Return 1 if the number is even, otherwise return 0.(TSRS)*/
int Q3_evenORodd(int num)
{
    if(num%2)
        return 0; //odd
    else
        return 1; //even
}

/*4-Write a function to print first N natural numbers(TSRN)*/
void Q4_PrintNnum(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d ",i);
}

/*5-Write a function to print first N odd natural numbers.(TSRN)*/
void Q5_PrintNoddnum(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i*2-1);
    }
}

/*6-Write a function to calculate the factorial of a number.(TSRS)*/
long int Q6_calFactorial(int n)
{
    long int fact=1;
    for(int i=n;i>0;i--)
        fact=fact*i;
    return fact;
}

/*7-Write a function to calculate the number of combination one can make from n items and r selected at a time.(TSRS)*/
int Q7_calNumOfCombination(int n/*items*/,int r/*seleted*/)
{
    /*  nCr=n!/r!(n-r)!   */
    int comb;
    comb=Q6_calFactorial(n)/(Q6_calFactorial(r)*Q6_calFactorial(n-r));
    return comb;
}

/*8-Write a function to calculate the number of arrangements one can make from n items and r selected at a time*/
int Q8_calArrangements(int n/*items*/,int r/*selected*/)
{
    int arr;
    arr=Q6_calFactorial(n)/Q6_calFactorial(n-r);
    return arr;
}

/*9-Write a function to check whether a given number contains a given digit or not.(TSRS) */
int Q9_containDigitOrNot(int num,int d)
{
    int ch=0;
    while(num)
    {
        if(num%10==d){
            return 1;
            break;
        }
        num/=10;
        return 0;
    }
}

/*10-Write a function to print all prime factors of a given number.(TSRN)*/
void Q10_PrintPrimeFactors(int num)
{
    int i=2;
    while(num>1)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
        i++;
        /*if(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
        else
            i++;*/
    }
}
int main()
{
    float s;
    s=Q1_areaOfCircule(7);
    printf("1.Area of circle is %.2f",s);
    printf("\n");

    s=Q2_simpleInterest(250000,5.6,3);
    printf("2.Simple Interest is %.2f",s);
    printf("\n");

    int a;
    a=Q3_evenORodd(237);
    if(a==1)
        printf("3.Even");
    else
        printf("3.Odd");
    printf("\n");

    Q4_PrintNnum(17);
    printf("\n");

    Q5_PrintNoddnum(9);
    printf("\n");

    a=Q6_calFactorial(5);
    printf("6.Factorial is %d",a);
    printf("\n");

    a=Q7_calNumOfCombination(4,2);
    printf("7.Total Combination = %d",a);
    printf("\n");

    a=Q8_calArrangements(4,2);
    printf("8.Total Arrangements = %d",a);
    printf("\n");

    Q9_containDigitOrNot(3572,7);
    printf("\n");

    Q10_PrintPrimeFactors(525);
}