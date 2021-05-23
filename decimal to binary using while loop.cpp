#include<stdio.h>
#include<conio.h>
int main()
{
    int n,quo,rem,binary=0,i=1;
    printf("\n enter any decimal number\n");
    scanf("%d",&n);
    quo=n;
    while(quo!=0)
    {
        rem=quo%2;
        quo=quo/2;
        binary=binary+(rem*i);
        i=i*10;
    }
    printf("\n binary equivalent of the entered number is:\n%d",binary);
    getch();
}
