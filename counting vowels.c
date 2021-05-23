#include<stdio.h>
#include<conio.h>
void main()
{
    int j=0,count=0;
    char s[1000];
    printf("\n enter  any sentence \n");
    gets(s);
    while(s[j]!='\0')
    {
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
            count++;
            j++;
    }
    printf("\n %d is the number of vowels in the sentence you entered ",count);
    getch();
}
