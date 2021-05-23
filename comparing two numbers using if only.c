#include<stdio.h>
#include<conio.h>

void main()
{

float a,b,c;
int n;
  nick:  printf("enter any three numbers among which u want to find greatest\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b&&a>c)
    {

        printf("%f is greatest\n",a);
    }
    if(b>a&&b>c)
    {

        printf("%f is grstest\n ",b);
    }
    if(c>a&&c>b)
    {
        printf("%f is greatest\n",c);

    }
    if(a<b&&a<c)
    {
        printf("%f is smallest\n",a);

    }
    if(b<a&&b<c)
    {
        printf("%f is smallest\n ",b);
    }
    if(c<a&&c<b)
    {
        printf("%f is smallest\n",c);
    }
    printf("enter 1 if you want to reset values otherwise press any kery to exit");
    scanf("%d",&n);
    if(n==1)
        goto nick;
    if(n!=1)
        exit(0);

    getch();
}
