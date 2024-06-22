/*1.Write a Program to calculate the lenght of the string.(without using builtin method)*/
#include<stdio.h>
#include<string.h>
void f1(){
    char str[50],len;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(len=0;str[len];len++);
    printf("Length is %d",len);
}
int main(){
    f1();
    return 0;
}