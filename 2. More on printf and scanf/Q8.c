/* Input three characters fro user and display
 characters with their corresponding ASCII codes. */
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
    char ch1,ch2,ch3;
    printf("Enter three character: ");
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    printf("%c = %d\n",ch1,ch1);
    printf("%c = %d\n",ch2,ch2);
    printf("%c = %d\n",ch3,ch3);
    getch();
    return 0;    
 }