/* Take Date as an input "DD/MM/YYYY" 
   And Output formate "Day-DD,Month-MM,Year-YYYY"*/ 
#include<stdio.h>
#include<conio.h>
int main()
{
    int d,m,y;
    printf("Enter the Date: ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day - %d\tMonth - %d\tYear - %d",d,m,y);
    getch();
    return 0;
}