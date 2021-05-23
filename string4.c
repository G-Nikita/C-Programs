#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char source[100],target[100];
    printf("enter any sentence\n");
    gets(source);
    strcpy(target,source);
    printf("\n\n\nthis is source from where  string is copied to target\n\n\n");
    puts(source);
    printf("\n\n\nthis is the target location of copying\n\n\n");
    puts(target);
    getch();
}
