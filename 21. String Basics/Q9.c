/*9.Write a program in C to copy one string to another char array.*/
#include<stdio.h>
#include<string.h>

void f9(){
    char str[50],s[50];
    int i;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++){
        s[i]=str[i];
    }
    s[i]='\0';
    printf("\n%s",s);
}
int main(){
    f9();
    return 0;
}