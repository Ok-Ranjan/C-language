#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1; i<=4; i++){
        for(j=0; j<4; j++){
            if(j<i)
                printf("%d ",i-j);
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}