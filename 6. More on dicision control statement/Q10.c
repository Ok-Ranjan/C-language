/* Takes the month number as an input and display number of days in that month. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    printf("Enter the month number: ");
    scanf("%d",&m);
    if(m<=12)
    {
        if(m==4||m==6||m==9||m==11)
           printf("30 Days in this month");
        else if(m==2)
            printf("28 or 29 Days in this month");
        else
            printf("31 Days in this month");
    }
    else
       printf("Not a volid month");
    getch();
    return 0;
}