#include<stdio.h>
#include<conio.h>
void main()
{
    int n;

    printf("enter the number upto which you want to see sum of numbers");
    scanf("%d",&n);
    printf("%d is the sum of numbers upto %d",(n*(n+1)/2),n);
    getch();
}
