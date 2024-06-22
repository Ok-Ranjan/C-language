/* Check whether a given  number is an even number 
  or an odd number without using % operator */
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x/2*2==x)
       printf("Given number(%d) is even",x);
    else
       printf("Given number(%d) is odd",x);
    getch();
    return 0;
}                                                    