#include<stdio.h>
#include<conio.h>
void byMe();
void byMysirG();
int main()
{
    int i,j,k,v;
    for(i=1;i<=5;i++){
        k=6-i;
        for(j=1,v=1;j<=9;j++){
            if(j==k && j<=4+i){
                printf("%d ",v);
                j<5?v++:v--;
                k+=2;
            }
            else{
                printf("  ");
                if(j==5)
                    v--;
            }
        }
        printf("\n");
    }
    printf("\n");
    byMe();
    printf("\n");
    byMysirG();
    return 0;
}
void byMysirG(){
    int i,j,k,x;
    for(i=1;i<=5;i++){
        k=1;
        x=1;
        for(j=1;j<=9;j++){
            if(j>=6-i&& j<=4+i){
                if(k){
                    printf("%d ",x);
                    j<5?x++:x--;
                }
                else{
                    printf("  ");
                    if(j==5)
                        x--;
                }
                k=1-k;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
void byMe()
{
    int i,j,a;
    for(i=1; i<=5; i++)
    {
        a=1;
        for(j=1; j<=9; j++)
        {
            if(j>=6-i&&j<=4+i && i+j!=7 && i+j!=9 && i+j!=11 && i+j!=13)
            {
                if(j<=5)
                    printf("%d ",a++);
                else
                {
                    if(i==3||i==5&&j==7)
                    {
                        a=a-2;
                        printf("%d ",a);
                    }
                    else
                        printf("%d ",--a);
                }           
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

