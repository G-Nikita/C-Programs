#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char fn[10]="shyam",ln[10]="lal",target[10];
    printf("\n length of first name and last name is:\n   %d \t%d\n\n",strlen(fn),strlen(ln));
    printf("\n full name is \t%s",strcat(fn,ln));
    printf("\n string comparison between %s and %s is:\n%d\n\n",fn,ln,strcmp(fn,ln));
    printf("\n target string before copying is %s\n\n",target);
    strcpy(target,fn);
    printf("\n target string after copying of full name into it is:\t %s\n\n",target);
    printf("\n full name in lower caase is %s\n\n",strlwr(fn));
    printf("\n full name in upper case is %s\n\n",strupr(fn));
    printf("\n reverse of full name is %s \n\n",strrev(fn));
    getch();

}
