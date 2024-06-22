#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,num=1;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(j<=i)
            {
                printf("%d ",num);
                num++;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}