//   Check whether a given  number is an even number or an odd number
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    (x%2)?printf("Given number(%d) is odd",x):printf("Given number(%d) is even",x);
    getch();
    return 0;
}                                                    