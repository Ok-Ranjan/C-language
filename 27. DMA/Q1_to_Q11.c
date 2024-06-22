#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
/*1.Define a function to input variable lenghth string and store it in an array without memory wastage.*/
char* input_str(){
    int i,size=1;
    char ch,*p=NULL,*q=NULL;
    printf("Enter Text: ");
    q=(char*)calloc(size,sizeof(char));
    q[0]='\0';
    while(1){
        ch=getchar();
        if(ch=='\n')
            break;
        p=(char*)calloc(size+1,sizeof(char));
        for(i=0;i<size;i++)
            p[i]=q[i];
        p[i-1]=ch;
        p[i]='\0';
        size++;
        free(q);
        q=(char*)calloc(size,sizeof(char));
        strcpy(q,p);
        free(p);
    }
    return q;
}

/*2.Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
void average(){
    int n,*ptr,i,sum;
    float avg;
    printf("Enter the number of data: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,4);

    printf("Enter Numbers for calculate average: ");
    for(i=0,sum=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    avg=(float)sum/n;
    printf("Average = %.2f",avg);
    free(ptr);
}

/*3.Write a program to calculate the sum of n numbers entered by the user using
malloc and free.*/
int sumOfNum(){
    int *ptr,sum=0,true_false=1;
    char space=0;
    printf("Enter Numbers for adding\n(by seprating space each number): ");
    while(true_false){
        ptr=(int*)malloc(sizeof(int));
        scanf("%d",ptr);
        sum+=*ptr;
        if(getch()!=' ')
            true_false=0;
        free(ptr);
    }
    return sum;
}

/*4.Write a function to merge two array elements and store it in dynamically created
array. Return address of this dynamically created array.*/
int* merge(int A[],int size_A,int B[],int size_B){
    int *ptr=(int*)calloc(size_A+size_B,sizeof(int));
    int i,index_A=0,index_B=0;
    for(i=0;index_A<size_A&&index_B<size_B;i++){
        if(A[index_A]<B[index_B]){
            ptr[i]=A[index_A];
            index_A++;
        }
        else{
            ptr[i]=B[index_B];
            index_B++;
        }
    }
    //copy remaining elements of A
    while(index_A<size_A){
        ptr[i]=A[index_A];
        index_A++;
        i++;
    }
    //copy remaining elements of B
    while(index_B<size_B){
        ptr[i]=B[index_B];
        index_B++;
        i++;
    }
    return ptr;
}

/*5.Define a structure Student with name,roll number and college name as members.
Define another structure Team with two Student type variables as members.*/
struct Student{
    char name[20];
    int rollNo;
    char collage_name[50];
};
struct Team{
    struct Student s1,s2;
};

/*6.IN question 5, define a method to dynamically create a Student type variable and
initialise with the values received in the arguments. Return address of Student type variable.*/
struct Student* create_student(char stu_name[],int stu_roll,char coll_name[]){
    struct Student *stu=(struct Student*)malloc(sizeof(struct Student));  //74
    strcpy(stu->name,stu_name);
    stu->rollNo=stu_roll;
    strcpy(stu->collage_name,coll_name);
    return stu;
}

/*7.In question 5, define a method to dynamically create Team variable, initialise it with
the received arguments. Return address of the Team variable.*/
struct Team* create_team(struct Student stu_1,struct Student stu_2){
    struct Team *t=(struct Team*)malloc(sizeof(struct Team));  //148
    t->s1=stu_1;
    t->s2=stu_2;
}

/*8.In question 5, define a method to display data of Student type, also define a method
to display data of Team type.*/
void show_student_data(struct Student s){
    printf("%s | %d | %s",s.name,s.rollNo,s.collage_name);
}
void show_team_data(struct Team t){
    printf("\n\t");
    show_student_data(t.s1);    
    printf("\n\t");
    show_student_data(t.s2);
    printf("\n");
}

/*9.In question 5, define a method to dynamically create an array of pointers of type
Student. Array size is received as an arrgument. Return the address of array.*/
struct Student** create_arrayOfPtr_student(int sizeOfArray){
    struct Student **s=(struct Student**)calloc(sizeOfArray,sizeof(struct Student));
    return s;
}

/*10.In question 5,define a method to dynamically create an array of pointers of type
Team. Array size is received as an arrgument. return the address of array.*/
struct Team** create_arrayOfPtr_team(int sizeOfArray){
    struct Team **t=(struct Team**)calloc(sizeOfArray,sizeof(struct Team));
    return t;
}

/*11.In question 5, defien a driver function to create 6 Students and 3 Teams. Form
teams by assigning two students in each team. At last display the list of teams with
students in them.*/
void driverFunction(){
    struct Student **S=create_arrayOfPtr_student(6);
    struct Team **T=create_arrayOfPtr_team(3);

    S[0]=create_student("Ranjan",101,"MITS");
    S[1]=create_student("Mukesh",102,"Maharishi Chauvan Gola");
    S[2]=create_student("Manish",103,"Allenhouse Kanpur");
    S[3]=create_student("Rohit",104,"LBT Buxar");
    S[4]=create_student("Banti",105,"+2 Adarsh Chausa");
    S[5]=create_student("Rahul",106,"MV Buxar");

    int i,j;
    for(i=0,j=0;i<6;i=i+2,j++)
        T[j]=create_team(*S[i],*S[i+1]);
    
    for(i=0;i<3;i++){
        printf("Team_%d:-",i+1);
        show_team_data(*T[i]);
    }
}


int main(){
    // driverFunction();
    char *str=input_str();
    printf("%s",str);
}