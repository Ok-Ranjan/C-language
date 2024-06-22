#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 65 ... 90:
            printf("Given character is uppercase alphabet");
            break;
        case 97 ... 122:
            printf("Given character is lowercase alphabet");
            break;
        default:
            printf("Given character is some other special character");
    }
    getch();
    return 0;
}