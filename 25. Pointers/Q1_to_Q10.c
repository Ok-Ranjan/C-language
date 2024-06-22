#include<stdio.h>
#include<string.h>

/*1.Write a function to swap values of two int variables(TSRN)*/
void swap(int *a,int *b){
    *b=*a^*b;
    *a=*a^*b;
    *b=*a^*b;
}
void f1(){
    int a,b;
    printf("Enter two numbers= ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d | b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping: a=%d | b=%d",a,b);
}

/*2.Write a function to search all occurrences of a given character in a given string.
Result of search is a list of indices to be stored in the given array.
[void search_all_occurrences(char *str,char ch,int *arr);]*/
int search_all_occurrences(char *str,char ch,int *arr){
    int i,j;
    for(i=0,j=0;str[i];i++)
        if(str[i]==ch){
            arr[j]=i;
            j++;
        }
    return j; //total number of occurrences
}
void f2(){
    char str[]="Ranjan Kumar Singh Khuswaha";
    char ch='a';
    int list_of_In[10],n;
    n=search_all_occurrences(str,ch,list_of_In);
    for(int i=0;i<n;i++)
        printf("%d\t",list_of_In[i]);
}

/*3.Write a function to convert a given string into uppercase.*/
char* uppercase(char *str){
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
    }
    return str;
}
void f3(){
    char str[20];
    printf("Enter a string: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    uppercase(str);
    printf("%s\n",str);
}

/*4.Write a function to convert a given string into lowercase.*/
void lowercase(char *str){
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;
    }
}
void f4(){
    char str[20];
    printf("Enter a string: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    lowercase(str);
    printf("%s\n",str);
}

/*5.Write a function to extract a substring from a given string with specified start index
(inclusive) and end index (exclusive), and store the extracted string in another char array.
[void extract_string(char *str,int strat_index,int end_index,char *result);]*/
void extract_string(char *str,int strat_index,int end_index,char *result){
    int i;
    for(i=strat_index;i<end_index;i++){
        result[i-strat_index]=str[i];
    }
    result[end_index-strat_index]='\0';
}
void f5(){
    char str[50]="Ranjan Kumar Singh";
    char result[20];
    extract_string(str,7,12,result);
    printf("%s",result);
}

/*6.Write a function to swap strings of two char arrays.*/
void swap_str(char *str1,char *str2){
    char temp[strlen(str1)];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
void f6(){
    char str1[20],str2[20];

    printf("Enter str1: ");
    fgets(str1,20,stdin);
    str1[strlen(str1)-1]='\0';
    
    printf("Enter str2: ");
    fgets(str2,20,stdin);
    str2[strlen(str2)-1]='\0';
    
    printf("Before swapping: str1=%s | str2=%s\n",str1,str2);
    swap_str(str1,str2);
    printf("After swapping: str1=%s | str2=%s",str1,str2);
}

/*7.Write a function to sort an array of int type values.[void sort(int *ptr,int size);]*/
void sort(int *ptr,int size){
    int i,r,t;
    for(r=1;r<size;r++){
        for(i=0;i<size-r;i++){
            if(*(ptr+i)>*(ptr+i+1)){
                t=*(ptr+i);
                ptr[i]=ptr[i+1];
                ptr[i+1]=t;
            }
        }
    }
}
void f7(){
    int arr[]={25,75,123,42,12,56,23,90,26,34,82};
    sort(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        printf("%d,",i[arr]);
    }
}

/*8.Write a function to merge two arrays in a given array.
[void merge(int *arr1,int size1,int *arr2,int size2,int *arr3);]*/
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3){
    int i,j,k;
    for(i=0,j=0,k=0;i<size1&&j<size2;k++){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        arr3[k]=arr2[i];
        j++;
        k++;
    }
}
void f8(){
    int a1[6]={27,34,15,86,15,46};
    int a2[10]={27,34,15,86,15,46,26,34,65,39};
    int a3[6+10];
    sort(a1,sizeof(a1)/sizeof(int));
    sort(a2,sizeof(a2)/sizeof(int));
    merge(a1,6,a2,10,a3);
    for(int i=0;i<6+10;i++){
        printf("%d ",i[a3]);
    }
}

/*9.Write a function to move first value of the array to the position where all smaller
values will be in the left and greater values will be in the right.*/
int move_first_value(int *arr,int size){
    int i,first_value,t,j;
    first_value=0;
    for(i=0;i<size-1;i++){
        if(arr[i+1]<arr[first_value]){
            t=arr[i+1];
            for(j=i;j>first_value;j--)
                arr[j+1]=arr[j];
            arr[first_value+1]=arr[first_value];
            arr[first_value]=t;
            first_value++;
        }
    }
    return first_value;
}
int move(int *arr,int size){
    int left,right,loc,t;
    left=0;
    right=size-1;
    loc=0; //first element
    while(left<right){
        while(left<right&&arr[loc]<=arr[right])
            right--;
        if(left==right)
            break;
        t=arr[loc];
        arr[loc]=arr[right];
        arr[right]=t;
        loc=right;
        while(left<right&&arr[left]<arr[loc])
            left++;
        if(left==right)
            break;
        t=arr[left];
        arr[left]=arr[loc];
        arr[loc]=t;
        loc=left;
    }
    return loc;
}
void f9(){
    int A[]={15,2,8,16,15,5,24,12,7,31,21};
    // printf("%d\n",move(A,11));
    printf("%d\n",move_first_value(A,11));
    for(int i=0;i<11;i++){
        printf("%d ",i[A]);
    }
}

/*10.There are five classes with different number of student in them. Five arrays
containing marks of students of each class. write a function to receive an address
of an array of pointers to access marks of all the students. The job of function is to
 find the highest marks among all the classes. */
int find_highest_marks(int **classes){
    int i,j,highest_mark=0;
    for(i=0;i<5;i++){
        for(j=0;*(*(classes+i)+j)!=-1;j++){
            if(*(*(classes+i)+j)>highest_mark)
                highest_mark=*(*(classes+i)+j);
        }
    }
    return highest_mark;
}
void f10(){
    int *classes[5];
    int class_1[]={32,29,45,38,41,-1};
    int class_2[]={49,27,43,-1};
    int class_3[]={35,32,24,43,46,29,30,33,-1};
    int class_4[]={36,49,45,48,30,37,-1};
    int class_5[]={28,44,50,36,45,-1};
    classes[0]=class_1;
    classes[1]=class_2;
    classes[2]=class_3;
    classes[3]=class_4;
    classes[4]=class_5;
    printf("%d",find_highest_marks(classes));
}

int main(){
    f9();

    return 0;
 }