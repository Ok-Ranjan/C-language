// check whether a given year is leap year or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%100==0)
    {
      //century year
      if(year%400)
        printf("Given year is not leap year");
      else
        printf("Given year is leap year");
    }
    else
    {
      //Non century year
      if(year%4)
        printf("Given year is not leap year ");
      else
        printf("given number is leap year");
    }
    getch();
    return 0;
}