/* Print the first N even natural numbers */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d ",i*2);
    getch();
    return 0;
}