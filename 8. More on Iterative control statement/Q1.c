/* Print MySirG N times on the screen */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("MySirG ");
    getch();
    return 0;
}