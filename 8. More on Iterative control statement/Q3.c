/* Print the first N natural number in reverse order */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        printf("%d ",n);
        n--;
    }
    getch();
    return 0;
}