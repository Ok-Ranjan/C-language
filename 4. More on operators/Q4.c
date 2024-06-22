// make the last disit of a number stored in a variable as zero
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("so number = %d",x/10*10);
    getch();
    return 0;
}