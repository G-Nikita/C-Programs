#include<stdio.h>
#include<conio.h>
//struct dtb
//{

//};
int main()
{
    int  n,rem[10];
    int i,l=0,j;
    printf("\n enter any decimal number\n");
    scanf("%d",&n);
    for(i=0;i <=9;i++)
    {
        rem[i]=n%2;
        n=n/2;
        if(n==0)
            break;




    }
    printf("\n binary equivalent is:\n");
    for(j=0;rem[j]!='\0';j++)
    {
       l=l+1;
    }
       for(j=l-1;j>=0;j--)
            printf(" %d",rem[j]);

    getch();
}

