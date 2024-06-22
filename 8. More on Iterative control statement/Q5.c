/* Print the first N odd natural numbers in reverse order */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",2*n-1);
        n--;
    } 
    getch();
    return 0;
}