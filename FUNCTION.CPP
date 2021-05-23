//program for understanding functions
#include<stdio.h>
#include<conio.h>
int sum( int,int);
void main()
{
int a,b,add;
printf("enter any two integers");
scanf("%d%d",&a,&b);
add=sum(a,b);
printf("%d is the sum of numbers you entered",c);
getch();
}
int sum(int a,int b)
{
int c;
c=a+b;
return(c);
}