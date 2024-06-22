/* Print the first N natural number */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        printf("%d ",i);
    getch();
    return 0;
}