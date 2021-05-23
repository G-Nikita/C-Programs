#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
  if(a>c)
  printf("%d is greatest",a);
}
else
{
  if(b>a)
  {
     if(b>c)
     printf("%d is greatest",b);
   }
   if(c>a)
   {
     if(c>b)
     printf("%d is greatest",c);
     else
     printf("there is some logical error by developer");
   }
}
getch();
}