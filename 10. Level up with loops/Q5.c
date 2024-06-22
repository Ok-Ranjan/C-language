//Check whether two given numbers are co-prime numbers or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,H;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
        /*___Method-1___*/
    int i=2,x,y;
    H=1;
    while(a!=1 || b!=1){
        x=0; y=0;
        if(a%i==0){
            a=a/i;
            x++;
        }
        if(b%i==0){
            b=b/i;
            y++;
        }
        if(x==1 && y==1){
            H++;
            break;
        }
        if(x==0 && y==0)
            i++;
    }

        /*___Method-2___*/
    // for(H=a<b?a:b;H>0;H--){
    //     if(a%H==0 && b%H==0)
    //         break;
    // }    
    if(H==1)
        printf("Given two numbers is co-prime numbers");
    else
        printf("Given two numbers is not co-prime numbers");
    getch();
    return 0;
} 