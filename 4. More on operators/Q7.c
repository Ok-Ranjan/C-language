/* Take a three digit number from the user and rotate 
 its digits by one by one position towords the right */
#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    printf("After rotate its digit = %d",num%10*100+num/10);
    getch();
    return 0;
}