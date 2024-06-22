//   Check whether a given  number is positive or non positive
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x>0)
       printf("Given number(%d) is Positive",x);
    else
       printf("Given number(%d) is Non Positive",x);
    getch();
    return 0;
}                                                                                                         