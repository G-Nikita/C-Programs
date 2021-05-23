#include<stdio.h>
#include<conio.h>
void main()
{
    char a1[20],a2[20];
    int i;
    printf("enter first string\n");
    gets(a1);
    printf("now enter second string\n");
    gets(a2);
    for(i=0;a1[i]!='\0';i++)
    {
        a2[i]=a1[i];

        }
        printf("now string second has become\n");
        puts(a2);
        getch();
}
