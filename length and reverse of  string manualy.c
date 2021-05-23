#include<stdio.h>
#include<conio.h>
void main()
{
    char n[20];
    int i,l=0;
    printf("enter the string of which you want to know length and reverse\n");
    gets(n);
    for(i=0;n[i]!='\0';i++)
    {
        l=l+1;
    }
    printf("\n%d is the length of entred string\n",l);
    for(i=l-1;i>=0;i--)
    {
        printf("%c",n[i]);

    }
    printf("\nthis is the reverse of string you enterd");
    getch();
}
