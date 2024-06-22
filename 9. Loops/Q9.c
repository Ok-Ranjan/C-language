// Calculate LCM of two number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    //Method -1
    int LCM=1,i=2;
    while(a>1 || b>1)
    {
        if(a%i==0||b%i==0){
            if(a%i==0)
                a/=i;
            if(b%i==0)
                b/=i;
            LCM*=i;
        }
        else
           i++;
    }
    printf("LCM of two numbers = %d",LCM);
    //Method - 2
    // for(int L=a>b?a:b; L<=a*b; L++){
    //     if(L%a==0 && L%b==0){
    //         printf("LCM is %d",L);
    //         break;
    //     }
    // }
    getch();
    return 0;
}