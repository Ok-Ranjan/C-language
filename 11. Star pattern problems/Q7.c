    #include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char ch;
    for(i=1; i<=5; i++)
    {
        ch='A';
        for(j=1; j<=5; j++ )
        {
            if(j>=i)
            {
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