#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j; char ch;
    for(i=1; i<=4; i++)
    {
        ch='A';
        for(j=1; j<=7; j++)
        {
            if(j>=i && j<=8-i){
                printf("%c ",ch);
                ch++;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
