#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int opt,n1,n2;
    while(1)
    {
        printf("1.Calculate LCM of two numbers\n");
        printf("2.Calculate sum of the digits of a number\n");
        printf("3.Volume of a cubiod\n");
        printf("4.Check whether a given number is prime or Not\n");
        printf("5.Exit\n\n");
        printf("Choose your option: ");
        scanf("%d",&opt);
    
        switch(opt)
        {
            case 1:
                int LCM=1,i=2,same;
                printf("Enter two numbers: ");
                scanf("%d%d",&n1,&n2);
                while(n1!=1||n2!=1)
                {
                    same=0;
                    if(n1%i==0)
                    {
                        n1/=i;
                        same++;
                    }
                    if(n2%i==0)
                    {
                        n2/=i;
                        same++;
                    }
                    if(same==1||same==2)
                        LCM=LCM*i;
                    else
                        i++;
                }
                printf("LCM is %d\n",LCM);
                break;
            case 2:
                int digit,sum=0;
                printf("Enter a number: ");
                scanf("%d",&n1);
                for(i=1;n1!=0;i++)
                {
                    digit=n1%10;
                    sum+=digit;
                    n1/=10;
                }
                printf("sum is %d\n",sum);
                break;
            case 3:
                int l,w,h;
                printf("Enter the lenght,width and height: ");
                scanf("%d%d%d",&l,&w,&h);
                printf("Volume of cuboid is %d\n",l*w*h);
                break;
            case 4:
                int count=0;
                printf("Enter a number: ");
                scanf("%d",&n1);
                if(n1!=1)
                {
                    for(int i=2;i<n1;i++)
                    {
                        if(n1%i==0)
                            count++;
                        if(count>0)
                        {
                            printf("%d is not a prime number\n",n1);
                            break;
                        }
                    }
                    if(count==0)
                    {
                        printf("%d is a prime number\n",n1);
                        break;
                    }
                }
                else
                    printf("%d is not a prime number\n",n1);
                break;
            case 5:
                exit(0);
            default :
                printf("Choose right option(1...5)\n");
        }
    }
    return 0;
}