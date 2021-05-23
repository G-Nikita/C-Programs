#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char n[30];
    int l;
    printf("enter any string");
    gets(n);
    l=strlen(n);
    printf("string  length of \n");
    puts(n);
    printf(" is %d",l);
    getch();
}
