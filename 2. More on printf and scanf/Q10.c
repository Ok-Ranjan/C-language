/* user input date format "HH:MM"
   out format - "HH hour and MM minute" */
   #include<stdio.h>
   #include<conio.h>
   int main()
   {
      int h,m;
      printf("Enter the time: ");
      scanf("%d:%d",&h,&m);
      printf("%d Hour and %d Minute",h,m);
      getch();
      return 0;
   }