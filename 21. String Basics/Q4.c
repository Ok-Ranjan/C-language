/*4.Write a program to count spaces in a given string.*/
#include<stdio.h>
#include<string.h>

void f4(){
    char str[50];
    int count,i;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0,count=0;str[i];i++){
        if(str[i]==' ')
            count++;
    }
    printf("Total Space = %d",count);
}
int main(){
    f4();
    return 0;
}