/* Check whether a given number is divisible by 7 or divisible by 3. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
      printf("Given number is divisible by 7 or 3");
    else
      printf("Given number is not divisible by 7 or 3");
    getch();
    return 0;
}