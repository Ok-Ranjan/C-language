/*10.Write a program to find first occurrence of a given character in a given string.*/
#include<stdio.h>
#include<string.h>

void f10(){
    char str[50],ch;
    int i;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    printf("Enter a Character: ");
    scanf("%c",&ch);

    for(i=0;str[i];i++){
        if(ch==str[i])
            break;
    }
    if(str[i]==0)
        printf("%c not found in %s",ch,str);
    else
        printf("%c found in %s at %d index",ch,str,i);
}
int main(){
    f10();
    printf("\n");
    return 0;
}