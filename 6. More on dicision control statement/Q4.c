/* Check whether a given alphabet is in uppercase or lowercase. */
#include<stdio.h>
#include<conio.h>
int main()
{
    char alpha;
    printf("Enter a alphabet: ");
    scanf("%c",&alpha);
    if(alpha>='A' && alpha<='Z')
       printf("Given alphabet is an uppercase");
    else if(alpha>='a'&& alpha<='z')
       printf("Given alphabet is a lowercase");
    else
      printf("Non an Alphabet");
    getch();
    return 0;
}