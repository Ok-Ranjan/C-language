#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int option,a,b;
    while(5)
    {
        printf("1.Addition\n2.Subtration\n");
        printf("3.Multiplication\n4.Division\n5.Exit");
        printf("\nChoose Your Option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("Enter two integer number(for Add): ");
                scanf("%d%d",&a,&b);
                printf("%d+%d=%d\n",a,b,a+b);
                break;
            case 2:
                printf("Enter two integer number(for Sub): ");
                scanf("%d%d",&a,&b);
                printf("%d-%d=%d\n",a,b,a-b);
                break;
            case 3:
                printf("Enter two integer number(for Mul): ");
                scanf("%d%d",&a,&b);
                printf("%d*%d=%d\n",a,b,a*b);
                break;
            case 4:
                printf("Enter two integer number(for Div): ");
                scanf("%d%d",&a,&b);
                printf("%d/%d=%d\n",a,b,a/b);
                break;
            case 5:
                exit(0);
            default :
                printf("Please! Choose A correct option\n");
        }
    }
    getch();
    return 0;
}