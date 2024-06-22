// Print all prime numbers under 100.
#include<stdio.h>
int main()
{
    int j,i,count;
    for(i=2; i<100; i++){
        count=0;
        for(j=2; i>=j; j++){
            if(i%j==0)
               break;
        }
        if(j==i)
            printf("%d ",i);
    }
    return 0;
}