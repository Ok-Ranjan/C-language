//Calculate HCF of two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,H;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

        /*_____Method-1_____*/
    for(H=a<b?a:b;H>0;H--){
        if(a%H==0 && b%H==0)
            break;
    }
        /*_____Method-2_____*/
    // H=1;
    // for(int i=2; a>=i || b>=i; ){
    //     if(a%i==0 && b%i==0)
    //         H*=i;
    //     if(a%i==0 || b%i==0){
    //         if(a%i==0)
    //             a/=i;
    //         if(b%i==0)
    //             b/=i;
    //     }
    //     else
    //         i++;
    // }

        /*_____Method-3_____*/
    // int i=2,bount=0,count=0;
    // H=1;
    // while(a>=i || b>=i)
    // {
    //     bount=0; count=0;
    //     if(a%i==0)
    //     {
    //         a=a/i;
    //         bount++;
    //     }
    //     if(b%i==0)
    //     {
    //         b=b/i;
    //         count++;
    //     }
    //     if(bount==1 && count==1)
    //         H=H*i;
    //     if(bount==0 && count==0)
    //         i++;
    // }

   printf("HCF is %d ",H);
    return 0;
}