/* Print cubes of the first 10 natural numbers. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d ",i*i*i);
        i++;
    }
    getch();
    return 0;
}