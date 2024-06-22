// Print all Armstrong numbers under 1000.
#include<stdio.h>
int main()
{
    int num,pow,sum=0,count,j,n,d;
    for(num=1; num<=1000; num++)
    {
        n=num;
        count=0;
        while(n){
           n=n/10;
           count++;
        }
        n=num;
        for(n=num,sum=0;n;n/=10){
            d=n%10;
            for(pow=1,j=count; j!=0; j--)
                pow*=d;
            sum+=pow;
        }
        if(sum==num)  
           printf("%d ",num);
    }
    return 0;
}