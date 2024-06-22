/* Print the first N odd natural numbers */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d ",2*i-1);
    getch();
    return 0;
}