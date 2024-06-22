// Check whether a given  number is divisible by 5 or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%5)
       printf("Given number(%d) is not Divisible by 5",x);
    else
       printf("Given number(%d) is Divisible by 5 ",x);
    getch();
    return 0;
}                                                    