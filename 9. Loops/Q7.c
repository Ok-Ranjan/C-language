/* count digit in a given number  */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(count=0; num ; num/=10,count++);
    printf("%d digit in given number",count);
    return 0;
}