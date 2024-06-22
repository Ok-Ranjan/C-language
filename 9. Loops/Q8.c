// print prime number or Non Prime number
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2; i<num; i++){
        if(num%i==0){
            printf("%d is Non-Prime number",num);
            break;
        }
    }    if(i>=num)
        printf("%d is a prime number",num);
    return 0;
}