#include<stdio.h>
void input(int **,int n ,int size[] );
void output(int **q,int n ,int size[]);
int main()
{
    int a[5],b[6],c[3],d[8];
    int *p[4];
    int size[]={5,6,3,8};
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    input(p,4,size);
    output(p,4,size);
    return 0;
}
void output(int **q,int n ,int size[])
{
    int i ,j;
    for(i=0;i<n;i++)
    {
        printf("display %d:- ",size[i]);
        for(j=0;j<size[i];j++)
           printf("%d\n",*(*(q+i)+j));
    }
}
void input(int **q,int n,int size[])
{
    int i,j;
    for(i=0; i<n; i++)
    {
        printf("\nEnter %d number: ",size[i]);
        for(j=0; j<size[i]; j++)
           scanf("%d ",*(q+i)+j);
    }
}