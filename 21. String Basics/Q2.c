/*2.Write a program to count the occurrence of a given character in a given string.*/
#include<stdio.h>
#include<string.h>
void f2(){
    char ch,str[50];
    int i,count;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    fflush(stdin);

    printf("Enter a Character: ");
    scanf("%c",&ch);

    for(i=0;str[i];i++){
        if(ch==str[i])
            count++;
    }
    printf("Total Occurrence is %d",count);
}
int main(){
    f2();
    return 0;
}