#include<stdio.h>
#include<conio.h>
int main()
{
int i,r1,r2,r3,r4,n;

printf("enter the number upto which you want to find prime numbers");
scanf("%d",&n);
if(n>=11)
{
printf("prime numbers are 2,3,5,7");
for(i=2;i<=n;i++)
{
r1=i%2;r2=i%3;r3=i%5;r4=i%7;
if(r1!=0&&r2!=0&&r3!=0&&r4!=0)
printf(" %d,",i);

}
}
switch(n)
{
case 2:
printf("prime numbers are 2");
break;
case 3:
printf("prime numbers are 2,3");
break;
case 4:
printf("prime numbers are 2,3");
break;
case 5:
printf("prime numbers are 2,3,5");
break;
case 6:
printf("prime numbers are 2,3,5,");
break;
case 7:
printf("prime numbers are 2,3,5,7");
break;
case 8:
printf("prime numbers are 2,3,5,7");
break;
case 9:
printf("prime numbers are 2,3,5,7,");
break;
case 10:
printf("prime numbers are 2,3,5,7");
break;
}
getch();
return 0;
}