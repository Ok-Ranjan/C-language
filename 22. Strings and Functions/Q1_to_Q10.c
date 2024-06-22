#include<stdio.h>

/*1.Write a function to calculate lenght of the string*/
int lenOfString(char str[]){
    int l;
    for(l=0;str[l];l++);
    return l;
}
/*2.Write a function to reverse a string.*/
char* reverse_str(char str[]){
    char temp;
    int len=lenOfString(str);
    for(int i=0;i<=len/2;i++){
        temp=str[len-1-i];
        str[len-1-i]=str[i];
        str[i]=temp;
    }
    return str;
}
/*3.Write a function to compare two strings.*/
int compare(char s1[],char s2[]){
    int i;
    for(i=0;s1[i]&&s2[i];i++)
        if(s1[i]!=s2[i])
            break;
    return s1[i]-s2[i];
}

/*4.Write a function to transform string into uppercase*/
char* uppercase(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    return str;
}
/*5.Write a function to transform a string int lowercase*/
char* lowercase(char str[]){
    for(int i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
    return str;
}

/*6.Write a function to count vowels in a given string*/
int count_vowels(char str[]){
    int count=0,i,j;
    char v[]="aeiouAEIOU";
    for(i=0;str[i];i++){
        for(j=0;v[j];j++){
            if(str[i]==v[j]){
                count++;
                break;
            }
        }
    }
    return count;
}
/*7.Write a function to find a character in a given string. Return index of first occurrence
of given character. return -1 if character not found.*/
int findChar(char ch,char str[]){
    int In,i;
    for(i=0;str[i];i++){
        if(str[i]==ch)
            return i;
    }
    return -1;
}

/*8.Write a function to find character in a given string between specified indices
(start index(inclusive) and end index(exclusive).*/
int findChar_2(char ch,char str[],int start_index,int end_index){
    int l=lenOfString(str);
    if(end_index>l) // l=='\0'(NULL)
        end_index=l;
    if(start_index>=l)
        return -1;
    for(int i=start_index;i<end_index;i++){
        if(str[i]==ch)
            return i;
    }
    return -1;
}

/*9.Write a function to swap two character of a given string with specified indices.*/
void swap(char str[],int index1,int index2){
    int l=lenOfString(str);
    if(index1>=0 && index2>=0){
        if(index1>=l || index2>=l)
            printf("Swapping not possiable");
        else{
            char temp=str[index1];
            str[index1]=str[index2];
            str[index2]=temp;
        }
    }
}

/*10.Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
int is_alpha_numeric(char str[]){
    int alpha=0,digit=0;
    for(int i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z') //alpha
            alpha=1;
        if(str[i]>='0',str[i]<='9') //digits
            digit=1;
    }
    if(alpha&&digit)
        return 1;
    else
        return 0;
}

int main(){
    char str[]="12246";
    printf("%d",is_alpha_numeric(str));
    // printf("%d\n",lenOfString(str));
    // reverse_str(str);
    // printf("%s\n",str);
    // reverse_str(str);

    
}