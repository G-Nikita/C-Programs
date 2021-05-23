#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[30],i,sum=0;
    printf("enter the marks of students in that test");

    for(i=0;i<=29;i++)
    {

        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    printf("%f is the average of the class in that test",sum/30);
    getch();
}
