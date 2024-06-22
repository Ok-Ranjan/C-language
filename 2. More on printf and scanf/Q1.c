//calculate the average of three number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float ave;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    ave=(a+b+c)/3;
    printf("Average of trees number is %f",ave);
    getch();
    return 0;
}


   