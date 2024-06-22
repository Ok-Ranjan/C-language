#include<stdio.h>
#include<string.h>
/*1.Write a function to check whether a given string is palindrome or not.*/
int is_palindrome(char str[]){
    int i,l;
    l=strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-1-i])
            return 0; //Not Palindrome
    }
    return 1; //Palindrome
}

/*2.Write a function to trim a string (removing leading spaces from both the ends)*/
char* trim(char str[]){
    int i,j,k;
    for(i=0;str[i]==' ';i++);
    for(j=strlen(str)-1;str[j]==' ';j--);
    for(k=0;i<=j;k++)
        str[k]=str[i++];
    str[k]='\0';
    return str;
}

/*3.Write a function to count words in a given string*/
int count_words(char str[]){
    int i,count=0;
    str=trim(str);
    for(i=0;str[i];i++){
        if(str[i]==' ')
            count++;
        while(str[i]==' ')
            i++;
    }
    return count+1;
}

/*4.Write a function to reverse a string word wise. (For example if the given string is
"Mysirg Eduction Services" then the resulting string should be "Services Eduction Mysirg")*/
int copy(int i1,int i2,char str[],char copy_str[],int len){
    int i,j;
    for(i=i1,j=len;i<=i2;i++,j++)
        copy_str[j]=str[i];
    return j;
}
char* revrese_word_wise(char str[]){
    int i,j,l,len_r=0;
    l=strlen(str);
    char reverse_str[l];
    i=l-1;
    while(i>=0){
        for(j=i;str[j]!=' '&&j>=0;j--);
        len_r=copy(j+1,i,str,reverse_str,len_r);
        if(str[j]==' '){
            reverse_str[len_r]=' ';
            len_r++;
        }
        i=j-1;
    }
    copy(0,l-1,reverse_str,str,0);
    return str;
}

/*5.Write a function to do case insensitive comparison of two strings.*/
int compare_case_ignore(char A[],char B[]){
    int i,j;
    for(i=0;A[i];i++)
        if(A[i]>='a'&&A[i]<='z')
            A[i]-=32;
    for(i=0;B[i];i++)
        if(B[i]>='a'&&B[i]<='z')
            B[i]-=32;
    for(i=0;A[i]&&B[i];i++){
        if(A[i]!=B[i])
            return 0; //not same
    }
    if(A[i]==B[i])
        return 1; //same strings
    return 0; //Not same
}

/*6.Write a function to count frequency of each character of the given string.*/
void print_frquency(char str[]){
    int f[128]={0},i;
    for(i=0;str[i];i++)
        f[str[i]]++;
    for(i=0;i<=127;i++)
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);
}
char* sort_str(char str[]){
    int r,i,l;
    char ch;
    l=strlen(str);
    for(r=1;r<=l-1;r++){
        for(i=0;i<=l-1-r;i++){
            if(str[i]>str[i+1]){
                ch=str[i];
                str[i]=str[i+1];
                str[i+1]=ch;
            }
        }
    }
    return str;
}
void count_frequency(char str[]){
    int i,j,count=0;
    str=sort_str(str);
    for(i=0;str[i];i++){
        count++;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }
        printf("%c -> %d\n",str[i],count);
        count=0;
    }
}

/*7.Write a function to find a word in a given string.*/
int is_same(int i1,int i2,char str[],char w[]){
    int i,j;
    for(i=i1,j=0;i<=i2;i++,j++)
        if(str[i]!=w[j])
            return -1;
    return i1;
}
int find_word(char str[],char word[]){
    int i,j,l;
    l=strlen(str);
    i=0;
    while(i<l){
        for(j=i;str[j]!=' '&&j<l;j++);
        if(is_same(i,j-1,str,word)!=-1)
            return i;
        i=j+1;
    }
    return -1;
}

/*8.Write a function to make first character of each word of the string capital.*/
char* make_capital(char str[]){
    int i=0,l;
    l=strlen(str);
    trim(str);
    while(i<l){
        if(str[i]>='a'&&str[i]<='z'&&str[i]!=' ')
            str[i]-=32;
        while(str[i]!=' '&&i<l)
            i++;
        i++;
    }
    return str;
}

/*9.Write a function to make acronym name from a given name.For example, "Ramesh 
Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"*/
char* acronym_name(char name[]){
    int l,i,j,s,k;
    l=strlen(name);
    for(i=l-1;name[i]!=' ';i--);
    s=0;
    j=0;
    while(s<i){
        while(name[s]!=' ')
            s++;
        if(s!=i){
            name[++j]=name[s];
            name[++j]=name[++s];
        }
        else{
            j=j+1;
            for(k=s;k<l;k++,j++)
                name[j]=name[k];
        }
    }
    name[j]='\0';
    return name;
}

/*10.Write a function to concatenate two strings.*/
char* concatenate_str(char str1[],char str2[]){
    int i,j;
    for(i=0;str1[i];i++);
    for(j=0;str2[j];j++)
        str1[i+j]=str2[j];
    str1[i+j]='\0';
    return str1;
}

int main(){
    char input_1[50],input_2[20];
    printf("Enter first string: ");
    fgets(input_1,50,stdin);
    input_1[strlen(input_1)-1]='\0';

    printf("Enter  word: ");
    fgets(input_2,20,stdin);
    input_2[strlen(input_2)-1]='\0';

    printf("%s",concatenate_str(input_1,input_2));
    // printf("5");
}