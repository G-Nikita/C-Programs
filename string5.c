#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int l;
    printf("enter two strings you want to compare");
    gets(a);
    gets(b);
    l=strcmp(a,b);
    printf("%d is the string comparison result",l);
    printf("%d is the another string comparison result",strcmp("abc","bbc"));
    getch();

}
