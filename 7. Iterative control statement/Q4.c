/* Print the first 10 odd natural numbers. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d ",i*2-1);
        i++;
    }
    getch();
    return 0;
}