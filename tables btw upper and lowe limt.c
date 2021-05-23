#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m,i,j,pro;

    printf("first enter the lower limit and then upper limit between which you want to see table");
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
    for(j=1;j<=10;j++)
    {
        pro=i*j;
    printf(" \n %d*%d=%d \n ",i,j,pro);
    }
    }
    getch();
}
