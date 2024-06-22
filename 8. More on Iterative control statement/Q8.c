/* Print squares of the first n natural numbers   */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    getch();
    return 0;
}