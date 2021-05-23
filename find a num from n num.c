#include<stdio.h>
#include<conio.h>
void main()
{
    int n[20],a,i;
    printf("\n enter any number\n");
    scanf("%d",&n[20]);
    printf("\n now tell us which number you want to find");
    scanf("%d",&a);
    for(i=0;n[i]!='\0';i++)
    {
    if(n[i]==a)
    {
      printf("%d is at %d position",a,i);
    }
    getch();
    }

}
