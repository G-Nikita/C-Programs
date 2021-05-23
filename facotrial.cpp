#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    printf("\n enter the number to calculate its factorial\n");
    scanf("%d",&n);
    printf("\n factorial of %d is %d",n,fact(n));
    getch();
}
