//Input a character from the user and print its ASCII code.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("ASCII code = %d",ch);
    getch();
    return 0;
    
}