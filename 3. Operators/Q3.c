/* One char type variable .Assign 'A' in the variable.
   Now change the value of variable form 'A' to 'B'
      using increment operater     */
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='A'; //Assigning 'A' in ch variable.
    printf("Befor change the value of variable char = %c",ch);
    ch=++ch;
    printf("\nAfter change the value of variable char = %c",ch);
    getch();
    return 0;
}