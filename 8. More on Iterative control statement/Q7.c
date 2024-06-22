/* Print the first N even natural numbers in revers order */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",2*n);
        n--;
    }
    getch();
    return 0;
}