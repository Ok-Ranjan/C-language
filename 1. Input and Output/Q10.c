//Find the area of circle
#include<stdio.h>
#include<conio.h>
int main()
{
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    printf("Area of circle is %.2f having the radius %.1f",3.14*radius*radius,radius);
    getch();
    return 0;
}
