#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three numbers among which you want to find greatest");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)

printf("greatest number is  %d",a);
if(b>a&&b>c)

printf("greatest number is%d",b);

if(c>a&&c>b)

printf("greatest number is %d",c);
getch();
}