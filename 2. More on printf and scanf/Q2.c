//Calculate circumference of circle
#include<stdio.h>
#include<conio.h>
int main()
{
    int radius;
    float cir;
    printf("Enter the redius of circle: ");
    scanf("%d",&radius);
    cir=2*3.14*radius;
    printf("Circumference of circle is %.2f",cir);
    getch();
    return 0;
}
