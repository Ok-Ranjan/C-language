//Check whether a given number is there in the fibonacci series or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,x=-1,y=1,sum=0,ch=0;
    printf("Enter the Nth term of Fibonacci series: ");
    scanf("%d",&num);
    for(i=0;   ;i++){
        sum=x+y;
        if(num==sum){
            printf("%d is %d term in the series",num,i);
            break;
        }
        if(sum>num){
            printf("Given number %d is not available in Fibonacci series",num);
            break;
        }
        x=y;
        y=sum;
    }
    getch();
    return 0;
}