#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("songs.txt","r+");
    if(fp==NULL)
    {
        printf("error openieng of file");

    }
    else
    {
        do
        {
            ch=fgetc(fp);
            printf("%c",ch);
        }
        while(ch!=EOF);
    }
    fclose(fp);
    return 0;
    getch();

}
