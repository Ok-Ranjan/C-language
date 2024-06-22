// Check whether a given  number is a three digit number or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>99 && x<1000)
       printf("Given number(%d) is a three digit number",x);
    else
       printf("Given number(%d) is not a three digit number",x);
    getch();
    return 0;
}                                                    