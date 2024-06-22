#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*1.Define a structure Employee with member variables id, name, salary.*/
struct Employee{
    int id;
    char name[20];
    float salary;
};

/*2.Write a function to take inpute employee data from the user.[Refer structure from Q1]*/
void inputEmployee(struct Employee *e1){
    printf("Enter Employee Name : ");
    fflush(stdin);
    fgets(e1->name,20,stdin);
    e1->name[strlen(e1->name)-1]='\0';

    printf("Id : ");
    scanf("%d",&e1->id);

    printf("Salary : ");
    scanf("%f",&e1->salary);
}

/*3.Write a function to display employee data.*/
void displayEmployee(struct Employee e){
    printf("Name:%s | Id:%d | Salary:%.2f\n",e.name,e.id,e.salary);
}

/*4.Write a function to find the highest salary employee from given array of 10 employees.[Refer structure from Q1]*/
struct Employee highest_salary_Emp(struct Employee *ptr,int size){
    int i,high=0;
    for(i=1;i<size;i++){
        if(ptr[i].salary>ptr[high].salary)
            high=i;
    }
    return ptr[high];
}

/*5.Write a function to sort employees accoroding to their salaries[refer structure from Q1]*/
int highestSalaryEmployee_Index(struct Employee *ptr,int size){
    int i,high=0;
    for(i=1;i<size;i++){
        if(ptr[i].salary>ptr[high].salary)
            high=i;
    }
    return high;
}
void sort_by_salary(struct Employee *ptr,int size){
    struct Employee temp;
    int i,r;
    for(r=1;r<size;r++){
        for(i=0;i<size-r;i++){
            if(ptr[i].salary>ptr[i+1].salary){
                temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
}
void sortBySalary(struct Employee e[],int size){
    int last_in,higher_in;
    struct Employee temp;
    for(last_in=size-1;last_in>0;last_in--){
        higher_in=highestSalaryEmployee_Index(e,last_in+1);
        temp=e[higher_in];
        e[higher_in]=e[last_in];
        e[last_in]=temp;
    }
}

/*6.Write a function to sort employees according to their names[refer structure from Q1]*/
void sort_by_name(struct Employee *ptr,int size){
    struct Employee temp;
    int i,r;
    for(r=1;r<size;r++){
        for(i=0;i<size-r;i++){
            if(strcmp(ptr[i].name,ptr[i+1].name)>0){
                temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
}

/*7.Write a program to calculate the difference between two time periods.*/
struct Time{
    int hr,min,sec;
};
struct Time difference(struct Time t1,struct Time t2){
    struct Time temp;
    int seconds=abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
    temp.hr=seconds/3600;
    seconds=seconds%3600;
    temp.min=seconds/60;
    temp.sec=seconds%60;
    return temp;
}

/*8.Write a program to store informtions of 10 students and display them using structure.*/
struct Student{
    int rollNo;
    char name[20];
};
struct Student inputStudent(){
    struct Student s1;
    printf("Student Name: ");
    fflush(stdin);
    fgets(s1.name,20,stdin);
    s1.name[strlen(s1.name)-1]='\0';
    printf("Roll No.: ");
    scanf("%d",&(s1.rollNo));
    return s1;
}
void inputStudents_array(struct Student *s,int size){
    int i;
    for(i=0;i<size;i++){
        s[i]=inputStudent(s+i);
    }
}
void displayStudent(struct Student s1){
    printf("Name: %s | RollNo.: %d\n",s1.name,s1.rollNo);
}
void displayStudent_array(struct Student *s,int size){
    int i;
    for(i=0;i<size;i++){
        displayStudent(s[i]);
    }
}

/*9.Write a program to store information of n students and display them using structure.*/
//as Q8

/*10.Write a program to enter the marks of 5 students in Chemistry,Mathematics and Physics
(each out of 100)using a structure named Marks having elements roll no., name, chem_marks,
math_marks and phy_marks and then display the percentage of each student.*/
struct Marks{
    struct Student stu;
    float chem_marks,math_marks,phy_marks;
};
void input_Marks(struct Student *s,struct Marks *m,int numOfStu){
    for(int i=0;i<numOfStu;i++){
        strcpy(m[i].stu.name,s[i].name);
        m[i].stu.rollNo=s[i].rollNo;
        printf("%s | Roll.no:%d\n",m[i].stu.name,m[i].stu.rollNo);
        
        printf("Chemistry : ");
        scanf("%f",&(m+i)->chem_marks);

        printf("Mathematics : ");
        scanf("%f",&(m+i)->math_marks);

        printf("Physics : ");
        scanf("%f",&(m+i)->phy_marks);
        printf("\n");
    }
}
float cal_percent(struct Marks m){
    return ((m.chem_marks+m.math_marks+m.phy_marks)/300)*100;
}
void display_marks_per(struct Marks *m,int size){
    for(int i=0;i<size;i++){
        printf("Student Name: %s | Percentage: %.2f\n",(m+i)->stu.name,cal_percent(*(m+i)));
    }
}

int main(){
    struct Student s[5]={{101,"Ranjan"},
                        {102,"Canti"},
                        {103,"Bukesh"},
                        {104,"Rahul"},
                        {105,"Rohit"}};  
    struct Marks m[5];
    input_Marks(s,m,5); 
    display_marks_per(m,5);  
}