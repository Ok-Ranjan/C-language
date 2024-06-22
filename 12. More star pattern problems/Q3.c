#include<stdio.h>
#include<conio.h>
int main()
{
    int k;
    for(int i=1;i<=4;i++){
        k=5-i;
        for(int j=1;j<=7;j++){
            if(j==k && j<=3+i){
                printf("* ");
                k+=2;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
void byMysirG(){
    int i,j,k;
    for(i=1;i<=4;i++){
        k=1;
        for(j=1;j<=7;j++){
            if(j>=5-1&&j<=3+i){
                if(k)
                    printf("*");
                else
                    printf(" ");
                k=1-k;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}