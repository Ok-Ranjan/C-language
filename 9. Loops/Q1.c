/* calculate sum of first N natural numbers  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++){
        sum+=i;
    }
    printf("\nSum of first %d natural numbers = %d",n,sum);
    getch();
    return 0; 
    
}