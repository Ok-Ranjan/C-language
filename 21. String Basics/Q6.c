/*6.Write a program to convert a given string into lovercase*/
#include<stdio.h>
#include<string.h>

void f6(){
    char str[50];
    
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    for(int i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
    printf("Updated String = %s",str);
}
int main(){
    f6();
    return 0;
}