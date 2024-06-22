#include<stdio.h>
float _1_Area_Of_Circle(int radius)
{
    return 3.14*radius*radius;
}
float _2_Simple_Interest(int prin,int Int,int time)
{
    return (prin*Int*time)/100;
}
int _3_checkEvenOdd(int num)
{
    if(num%2==0)
        return 1;
    return 0;
}
void _4_printN_naturalNum(int n)
{
    for(int i=1;i<=n;i++)
        printf("%d ",i);
}
void _5_printNOdd_naturalNum(int n)
{
    int count=0;
    for(int i=1;n!=count;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            count++;
        }
    }
}
int _6_Cal_FactofNum(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact*=i;
    return fact;
}
int main()
{
    printf("%d",_6_Cal_FactofNum(9));
}