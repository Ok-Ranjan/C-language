#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch){
        case 65 ... 90:
            ch=ch+32;
        case 97 ... 122:
            switch(ch){
                case 97: case 101: case 105: case 111: case 117:
                    printf("Vowel");
                    break;
                default:
                    printf("Consonant");
            }
            break;
        default :
            printf("Special character");
    }
    return 0;
}