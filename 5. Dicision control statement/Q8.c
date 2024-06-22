 /* check a whether roots of a given quadratic equation
  are real & distinct, real & equal or imaginary roots */
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the value a,b and c of Quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
    D=4*a*c;
    if(D>0)
       printf("real & distinct roots");
    else if (D==0)
       printf("real & equal roots");
    else 
       printf("imaginary roots");
    getch();
    return 0;
}