/* Print a table of n   */
#include<stdio.h>
#include<conio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  for(int i=1;i<=10;i++)
    printf("%d*%d=%d\n",n,i,n*i);
  getch();
  return 0;
}