#include<stdio.h>
#include<conio.h>
int main()
{
    int dayNum;
    printf("Enter day number(Mon-1): ");
    scanf("%d",&dayNum);
    if(dayNum<0)
        dayNum=-dayNum;
    switch(dayNum)
    {
        case 1:
            printf("Monday is a new beginning");
            break;
        case 2:
            printf("Jai Bajrangbali");
            break;
        case 3:
            printf("Wonderful Wednesday");
            break;
        case 4:
            printf("Jio ji bhar ");
            break;
        case 5:
            printf("Thank God its Friday");
            break;
        case 6:
            printf("Aaj tel Chadhana hai");
            break;
        case 7:
            printf("Enjoy Holiday");
            break;
        default:
            printf("Only 7 Days in a week");
    }
    getch();
    return 0;
}