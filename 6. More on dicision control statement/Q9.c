/* Takes the length of the sides of a triangle as an input
Display whether the triangle is valid or not */
#include<stdio.h>
#include<conio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter the length of sides of a triangle: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
    {
        if(s1!=s2&&s2!=s3&&s1!=s3)
            printf("This triangle is valid,It is Scalene triangle");
        else if(s1==s2&&s2==s3&&s1==s3)
            printf("This triangle is valid,It is Equilateral triangel");
        else
            printf("This triangle is valid,It is Isosceles triangel");
    }
    else
        printf("This triangle is not valid");
    getch();
    return 0;

}