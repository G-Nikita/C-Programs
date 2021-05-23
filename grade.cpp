#include<stdio.h>
#include<conio.h>
int  main()
{
    int m1,m2,m3,m4,m5,t;
    float per,n;
    printf("\n enter the marks of student in five subjects\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    t=m1+m2+m3+m4+m5;
    per=t/5;
    n=per/10;
    printf("\n Grade is \n ");
    switch(int(n))
    {
    case 9:
        printf("\n grade A++");
        break;
    case 8:
        printf("\n A");
        break;
    case 7:
        printf("\n B");
        break;
    case 6:
        printf("\n C");
        break;
    default :
        printf("\n FAIL");
        break;
    }
    getch();

}

