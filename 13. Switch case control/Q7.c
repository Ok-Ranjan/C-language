#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int choice,x,f;
    while(1)
    {
        printf("1. Factorial of a number\n");
        printf("2. Check Even or Odd\n");
        printf("3. Area of circle\n");
        printf("4. Sum of first N natural numbers\n");
        printf("5. Exit\n");
        printf("\nEnter your choise: ");
        scanf("%d",&choice );
        switch(choice)
        {
            case 1:
                f=1;
                printf("\nEnter a number: ");
                scanf("%d",&x);
                while(x){
                    f=f*x;
                    x--;
                }
                printf("Factorial is %d\n",f);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d",&x);
                x&1?printf("Odd number\n"):printf("Even number\n");
                break;
            case 3:
                printf("Enter radius of circle: ");
                scanf("%f",&x);
                printf("Area of circle is %f\n",3.14*x*x);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d",&x);
                f=0;
                while(x){
                    f+=x;
                    x--;
                }
                printf("Sum is %d\n",f);
                break;
            case 5:
                exit(0);
            default:
                printf("Please! Choose correct option\n");
        }
    }
    getch();
    return 0;
}