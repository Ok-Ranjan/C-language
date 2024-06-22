/* Check whether a given number is positive, negative or zero . */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)
      printf("Given number is a positive");
    else if(a<0)
      printf("Given number is a negative");
    else 
      printf("Given number is a zero");
    getch();
    return 0;
}