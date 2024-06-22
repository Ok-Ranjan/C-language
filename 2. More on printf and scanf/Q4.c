//Calculate the Volume of Cuboid
#include<stdio.h>
#include<conio.h>
int main()
{
    int l,w,h;
    printf("Enter the lenght of cuboid: ");
    scanf("%d",&l);
    printf("Enter the width of cuboid: ");
    scanf("%d",&w);
    printf("Enter the hight of cuboid: ");
    scanf("%d",&h);
    printf("Volume of cuboid is %d ",l*w*h);
    getch();
    return 0;    
}