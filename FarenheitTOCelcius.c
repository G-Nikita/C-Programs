#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    float x,c;
    int n;
   nick : printf("enter the temperature in farenheit");
    scanf("%f",&x);
    c=((x-32)*5)/9;
    printf("value of temperature in celcius is %f",c);
    printf("\n now enter 1 if you want to continue otherwise press 0\n ");
    scanf("%d",&n);
    if(n==1)
    {


        goto nick;
    }
    else
        exit(1);
    getch();
}
