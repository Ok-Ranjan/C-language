/*8.Write a program in C to count the total number of alphabets, digits and special characters in a string.*/
#include<stdio.h>
#include<string.h>

void f8(){
    char str[50];
    int i,alpha_count,digit_count,special_count;
    printf("Enter a String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    alpha_count=0;
    digit_count=0;
    special_count=0;
    for(i=0;str[i];i++){
        switch(str[i]){
            case 'A' ... 'Z':
            case 'a' ... 'z':
                alpha_count++;
                break;
            case '0' ... '9':
                digit_count++;
                break;
            default:
                special_count++;
        }
    }
    printf("Alphabets=%d\n",alpha_count);
    printf("Digits=%d\n",digit_count);
    printf("Special=%d",special_count);
}
int main(){
    f8();
    return 0;
}