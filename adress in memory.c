#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   printf("enter any number");
   scanf("%d",&n);
   printf("address of %d is=%u",n,&n);
   getch();
}
