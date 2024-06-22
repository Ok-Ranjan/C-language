#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int choice,s1,s2,s3;
    while(5)
    {
        printf("\n1.Check isosceles triangle\n");
        printf("2.Check right angled triangle\n");
        printf("3.Check equilateral triangel\n");
        printf("4.Exit\n\n");
        printf("Enter your chocie: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the lenght of sides of a triangle: ");
                scanf("%d%d%d",&s1,&s2,&s3);
                if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
                    if(s1==s2 || s2==s3 || s3==s1)
                        printf("Yes! it is an isosceles triangle\n");
                    else
                        printf("No! it is not an isosceles triangle\n");
                }
                else
                    printf("Sorry! This triangle is not valid\n");
                break;
            case 2:
                printf("Enter the lenght of sides of a triangle: ");
                scanf("%d%d%d",&s1,&s2,&s3);
                if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
                    if(s1*s1+s2*s2==s3*s3 || s1*s1+s3*s3==s2*s2 || s2*s2+s3*s3==s1*s1)
                        printf("Yes! it is a right angled triangle\n");
                    else
                        printf("No! it is not right angled triangle\n");
                }
                else
                    printf("Sorry! This triangle is not valid\n");
                break;
            case 3:
                printf("Enter the lenght of sides of a triangle: ");
                scanf("%d%d%d",&s1,&s2,&s3);
                if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
                {
                    if(s1==s2&&s3==s1)
                        printf("Yes! it is an equilateral triangel\n");
                    else
                        printf("No! it is not an equilateral triangel\n");
                }
                else
                    printf("Sorry! This is not valid triangle\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Please! Choose correct option\n");
        }
    }
    getch();
    return 0;
}