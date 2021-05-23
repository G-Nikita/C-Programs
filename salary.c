#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main ()
{

    int n ;
    float bs,total;
   nick: printf("enter the basic salary of an employee\n");
    scanf("%f",&bs);
    total=((bs*1.5)/100+(bs*2.5)/100+(bs*0.5)/100)+bs;
    printf("%f is the total salary of that employee ",total);
    printf("\n now enter 1 if you reset value of basic salary otherwise press any numerical key to exit\n");
    scanf("%d",&n);
    if(n==1)
    {
        goto nick;
    }
    else
    {
        exit(1);
    }
        return 0;
        getch();


}
