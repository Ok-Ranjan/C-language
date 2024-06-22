#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Grade B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 0 ... 49:
            printf("Grade F");
            break;
        default:
            printf("Invalid Marks");
    }
    getch();
    return 0;
}