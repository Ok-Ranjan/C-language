#include<stdio.h>
#include<string.h>

/*1.Write a function to store strings, taken from user, to the given 2d char array.*/
void input(int n,int c,char ch_array[][c]){
    int i;
    printf("Enter %d string: ",n);
    for(i=0;i<n;i++){
        fgets(ch_array[i],c,stdin);
        ch_array[i][strlen(ch_array[i])-1]='\0';
    }
}

/*2.Write a program to find the number of vowels in each of the 5 strings stored in two
dimensionals arrays, taken from the user.*/
int vowel_count(char str[]){
    int i,j,count=0;
    char v[]="aeiouAEIOU";
    for(i=0;str[i];i++)
        for(j=0;v[j];j++)
            if(str[i]==v[j]){
                count++;
                break;
            }
    return count;
}
void num_vowels(int r,int c,char ch_array[][c]){
    int i,j,k,count=0;
    input(r,c,ch_array);
    for(i=0;i<r;i++)
        printf("%s -> %d\n",ch_array[i],vowel_count(ch_array[i]));
}

/*3.Write a program to sort 10 city names strored in two dimensional arrays, taken from the user.*/
void swap_str(char str1[],char str2[]){
    int i;
    char t;
    for(i=0;str1[i]&&str2[i];i++){
        t=str1[i];
        str1[i]=str2[i];
        str2[i]=t;
    }
    while(str2[i]){
        str1[i]=str2[i];
        str2[i]='\0';
        str1[i+1]='\0';
        i++;
    }
    while(str1[i]){
        str2[i]=str1[i];
        str1[i]='\0';
        str2[i+1]='\0';
        i++;
    }
}
void sort(int r,int c,char ch_array[r][c]){
    int i,j,round;
    char temp;
    for(round=1;round<r;round++){
        for(i=0;i<r-round;i++){
            j=0;
            while(ch_array[i+1][j]==ch_array[i][j]){
                j++;
                if(ch_array[i+1][j]==0||!ch_array[i][j]==0)
                    break;
            }
            if(ch_array[i+1][j]<ch_array[i][j])
                swap_str(ch_array[i+1],ch_array[i]);
        }
    }
}
void sort_1(int r,int c,char city[r][c]){
    int round,i;
    char temp[c];
    for(round=1;round<r;round++){
        for(i=0;i<r-round;i++){
            if(strcmp(city[i],city[i+1])>0){
                strcpy(temp,city[i]);
                strcpy(city[i],city[i+1]);
                strcpy(city[i+1],temp);
            }
        }
    }
}

/*4.Write a function to store each word a string in a 2 dimensional char array.*/
int string_to_words(char str[],int r,int c,char ch_arr[r][c]){
    int i,j,l,s=0;
    l=strlen(str);
    for(i=0;s<l;i++){
        for(j=0;str[s];j++,s++){
            if(str[s]==' ')
                break;
            ch_arr[i][j]=str[s];
        }
        ch_arr[i][j]='\0';
        while(str[s]==' ')
            s++;
    }
    return i-1; // Last row
}

/*5.Write a function to remove duplicate names stored in the list of names stored in a 2d char array.*/
void del_str(int in,int r,int c,char ch_arr[r][c]){
    int i,j,l;
    l=strlen(ch_arr[in+1]);
    for(i=in;i<r-1;i++){
            strcpy(ch_arr[i],ch_arr[i+1]);
    }
}
int remove_dup_str(int r,int c,char ch_arr[r][c]){
    int i,j;
    for(i=0;i<r-1;i++){
        for(j=i+1;j<r;j++){
            if(strcmp(ch_arr[i],ch_arr[j])==0){
                del_str(j,r,c,ch_arr);
                j--;
                r--;
            }
        }
    }
    return r; // last row or number of string
}
void f5(){
    char ch_Array[5][20];
    input(5,20,ch_Array);
    int r=remove_dup_str(5,20,ch_Array);
    for(int i=0;i<r;i++)
        printf("%s\n",ch_Array[i]);
}

/*6.Write a program to find words ending with a letter 's' and store each such word in a 2d char array.*/
void add_word(int i1,int i2,char str[],int r,int c,char ch_arr[r][c],int wordNo){
    int i,j;
    for(i=i1,j=0;i<i2;i++,j++)
        ch_arr[wordNo][j]=str[i];
    ch_arr[wordNo][j]='\0';
}
int word_end_s(char str[],int r,int c,char ch_arr[r][c]){
    int i,j,count_word=0;
    i=0;
    while(str[i]){
        for(j=i;str[j]!=' '&&str[j];j++);
        if(str[j-1]=='s'){
            add_word(i,j,str,r,c,ch_arr,count_word);
            count_word++; //count total number of s_ending words in str
        }
        i=j+1;
    }
    int last_row=remove_dup_str(count_word,c,ch_arr);
    return last_row; //return total number of s_ending words
}

/*7.Write a function to return the most repeating character in a list of strings.*/
int is_persent(char c,char str[]){
    int l=strlen(str);
    for(int i=0;i<l;i++)
        if(c==str[i])
            return 1;
    return 0;
}
int count(int i,int j,char ch,int r,int c,char ch_arr[r][c]){
    int l,cout=0;
    for(i ;i<r;i++){
        l=strlen(ch_arr[i]);
        for(j ;j<l;j++){
            if(c==ch_arr[i][j])
                cout++;
        }
    }
    return cout;
}
char most_repeat_char(int r,int c,char ch_arr[r][c]){
    int i,j,l,k,cout,highest_count;
    char ch[26],most_rChar;
    most_rChar=ch_arr[0][0];
    highest_count=1;
    for(i=0,k=0;i<r;i++){
        l=strlen(ch_arr[i]);
        for(j=0;j<l;j++){
            if(is_persent(ch_arr[i][j],ch)){
                break;
            }
            ch[k]=ch_arr[i][j];
            cout=count(i,j,ch_arr[i][j],r,c,ch_arr);
            if(cout>highest_count){
                printf("1 ");
                most_rChar=ch_arr[i][j];
                highest_count=cout;
            }
        }
    }
    return highest_count;
}
char max_freq_char(int r,int c,char ch_arr[r][c]){
    int f[128]={0};
    int i,j,max,max_in;

    for(i=0;i<r;i++){
        for(j=0;ch_arr[i][j];j++)
            f[ch_arr[i][j]]++;
    }
    max=0;
    max_in=0;
    for(i=1;i<=127;i++){
        if(f[i]>max){
            max=f[i];
            max_in=i;
        }
    }
    return max_in;
}

/*8.Write a function to check whether a pair of string are anagram or not. Both the strings
are stored in 2d char array.*/
int is_anagram(int c,char ch_arr[2][c]){
    int i,j,l1,l2;
    l1=strlen(ch_arr[0]);
    l2=strlen(ch_arr[1]);
    if(l1!=l2)
        return 0; /*false*/

    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(ch_arr[0][i]==ch_arr[1][j])
                break;
        }
        if(j==l2)
            return 0; /*false*/
    }
    return 1; /*true,'Its means pair of string are anagram*/
}

/*9.Write a function to store all the words in a given string which are starting from 'a',in
a two dimensional char array.*/
int word_start_a(char str[],int r,int c,char ch_arr[r][c]){
    int i,j,count_word=0;
    i=0;
    while(str[i]){
        for(j=i;str[j]!=' '&&str[j];j++);
        if(str[i]=='a'||str[i]=='A'){
            add_word(i,j,str,r,c,ch_arr,count_word);
            count_word++; //count total number of s_ending words in str
        }
        i=j+1;
    }
    int last_row=remove_dup_str(count_word,c,ch_arr);
    return last_row; //return total number of s_ending words
}

/*10.A 2d array is full with 10 emails ids. Write a function to find how many of them belongs to gmail.com*/
int belong_to_gmail(int r,int c,char ch_arr[r][c]){
    int i,j,l,k,count=0;
    char pattern[]="gmail.com";
    l=strlen(pattern);
    for(i=0;i<r;i++){
        for(j=strlen(ch_arr[i])-1,k=l-1;k>=0;j--,k--){
            if(ch_arr[i][j]!=pattern[k])
                break;
        }
        if(k==-1)
            count++;
    }
    return count;
}

int main(){
    f5();

    return 0;
} 