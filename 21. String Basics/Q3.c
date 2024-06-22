/*3.Write a program to count vowels in a given string*/
#include<stdio.h>
#include<string.h>
void f3(){
    char str[50],v[]="aeiouAEIOU";
    int count,i,j;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    count=0;
    for(i=0;str[i];i++){
        for(j=0;v[j];j++){
            if(str[i]==v[j]){
                count++;
                break;
            }
        }
    }
    printf("count is %d",count);
}
int main(){
    f3();
    return 0;
}