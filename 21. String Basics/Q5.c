/*5.Write a program to convert a given string into uppercase*/
#include<stdio.h>
#include<string.h>

void f5(){
    char str[50];
    
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(int i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    printf("Updated String = %s",str);
}
int main(){
    f5();
    return 0;
}