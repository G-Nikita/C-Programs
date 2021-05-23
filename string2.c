#include<stdio.h>
#include<conio.h>
int main()
{
    char n[11];
    int i=0,j=0;
    printf("enter a  collection of characters\n");

    scanf("%s",&n);

    while(n[i]!='\0')
    {


        printf("%c",n[i]);
        i++;
    }
    return 0;
    getch();
}
