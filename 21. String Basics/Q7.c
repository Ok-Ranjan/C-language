/*7.Write a program to reverse a string.*/
#include<stdio.h>
#include<string.h>

void f7(){
    char str[50],ch;
    int i,l;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++){
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("Reverse of String is %s",str);
}
int main(){
    f7();
    return 0;
}