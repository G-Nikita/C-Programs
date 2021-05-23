#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("\n enter the value of a,band c of a standard quadratic equation\n ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("\n roots are real and distinct:\t %f %f",x1,x2);
    }
    else if(d==0)
    {
        x1=-b/(2*a);
        printf("\n roots are real and same :\t %f",x1);
    }
    else if(d<0)
    {
        printf("\n roots are imajinary");
    }
    getch();
    return 0;
}
