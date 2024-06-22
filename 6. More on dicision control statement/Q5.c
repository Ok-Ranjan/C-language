/* Check whether a given number is divisible by 3 and divisible by 2. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
      printf("Given number is divisible by 3 and 2");
    else
      printf("Given number is not divisible by 3 and 2");
    getch();
    return 0;
}