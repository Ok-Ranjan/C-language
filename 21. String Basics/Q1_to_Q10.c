#include<stdio.h>

/*1.Write a Program to calculate the lenght of the string.(without using builtin method)*/
int lenOfStr(char str[]){
    int len;
    for(len=0;str[len];len++);
    return len;
}
/*2.Write a program to count the occurrence of a given character in a given string.*/
int count_occurrence(char ch,char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]==ch)
            count++;
    }
    return count;
}
/*3.Write a program to count vowels in a given string*/
int count_vowels(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    }
    return count;
}
/*4.Write a program to count spaces in a given string.*/
int count_space(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]==' ')
            count++;
    }
    return count;
}
/*5.Write a program to convert a given string into uppercase*/
void conv_upper(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
}
/*6.Write a program to convert a given string into lovercase*/
void conv_lower(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
}
/*7.Write a program to reverse a string.*/
void reverse(char str[]){
    char temp;
    int len=lenOfStr(str);
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-(i+1)];
        str[len-(i+1)]=temp;
    }
}
/*8.Write a program in C to count the total number of alphabets, digits and special characters in a string.*/
void count(char str[]){
    int alpha=0,digit=0,special=0;
    for(int i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            alpha++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            special++;
    }
    printf("Total Number of:\nAlphabets=%d\nDigits=%d\nSpecial Char.=%d\n",alpha,digit,special);
}
/*9.Write a program in C to copy one string to another char array.*/
void copyStr(char s1[],char C_s1[]){
    int l=lenOfStr(s1);
    for(int i=0;i<l;i++){
        C_s1[i]=s1[i];
    }
}
/*10.Write a program to find first occurrence of a given character in a given string.*/
int firstOccurr(char x,char str[]){
    for(int i=0;str[i];i++){
        if(str[i]==x)
            return i;
    }
    return -1;
}

int main(){
    char str[20];
    //USER INPUTEko
    fgets(str,20,stdin);
    str[lenOfStr(str)-1]='\0';
    
    printf("lenght = %d\n",lenOfStr(str));
    printf("occurr. of 'a' = %d\n",count_occurrence('a',str));
    printf("total vowels = %d\n",count_vowels(str));
    printf("total space = %d\n",count_space(str));

    char str2[20];
    copyStr(str,str2);
    printf("copy: %s",str2);

    printf("\n%d",firstOccurr('n',str));
    return 0;
}