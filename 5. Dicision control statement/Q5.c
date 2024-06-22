/* Check whether a given  number is even 
  or odd using a bitwise operator */ 
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x&1)
       printf("Given number(%d) is odd",x);
    else
       printf("Given number(%d) is even",x);
    getch();
    return 0;
}                                                    