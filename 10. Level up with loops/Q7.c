// Print all prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int a,b,i,j,count;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(i=(a>=b)?b:a; i<=(a>=b?a:b); i++){
        for(j=2; j<i; j++){
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
    return 0;
}