#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,table[20],pro;
    printf("enter total number of that numbers of which you want see table");
    scanf("%d",&n);
    printf("now enter those numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&table[i]);
        for(j=1;j<11;j++)
        {
            pro=j*table[i];
            printf("\n %d*%d=%d \n ",table[i],j,pro);
        }
    }
    getch();
}
