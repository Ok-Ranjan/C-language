// Calculate the size of a real constant.      
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    x=sizeof(8.3); //real constant - float and double.
    printf("Size of real constant is:-");
    printf("\nSize - %d",x);
    getch();
    return 0;
}