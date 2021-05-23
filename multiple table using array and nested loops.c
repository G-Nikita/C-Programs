#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,table[20],pro;
    printf("enter the total number of tables you want to see");
    scanf("%d",&n);
    printf("now enter those numbers ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&table[i]);


        for(j=1;j<=10;j++)
        {



            pro=j*table[i];
            printf("%d*%d=%d",table[i],j,pro);
        }

    }

    getch();
}
