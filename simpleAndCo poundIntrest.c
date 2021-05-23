#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   float p,r,t,si,ci,amount;
   printf("Enter the principal, rate and time for which loan is provided ");
   scanf("%f %f %f",&p,&r,&t);
   si=(p*r*t)/100;
   ci=pow(p(1+r/100),t);
   amount=si+p;
   printf("\n %f is the simple interest \t %f is the compound interest \t %f is the amount payable ",si,ci,amount);
   getch();
}
