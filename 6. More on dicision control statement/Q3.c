/* Take marks of five subject from the user. Assume marks are given 
out of 100 and passing marks in 33. Now display whether the candidate 
passed the examination or failed */
#include<stdio.h>
#include<conio.h>
int main()
{
    float m1,m2,m3,m4,m5,total;
    printf("Enter the marks of five subject:-\n");
    scanf("%f,%f,%f,%f,%f",&m1,&m2,&m3,&m4,&m5);
    if(m1>=33&& m2>=33&& m3>=33&& m4>=33&& m5>=33)
      printf("CONGRATULATION!, The candidate passed the examination");
    else 
      printf("Sorry,The candidat failed the examination");
    getch();
    return 0;

}