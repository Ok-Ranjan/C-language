// print size of an int,a float.a char and a double type variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int in,flo,ch,doubl;
    in=sizeof(int);
    flo=sizeof(float);
    ch=sizeof(char);
    doubl=sizeof(double);
    printf("size of an int is %d",in);
    printf("\nsize of a float is %d",flo);
    printf("\nsize of a char is %d",ch);
    printf("\nsize of a double is %d",doubl);
    getch();
    return 0;
}