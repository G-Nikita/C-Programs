#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int rn;
    float s1,s2,s3,s4,s5,s6,t,p,n;
    char name[20];
    printf("first of all enter the name and roll number of  the student \n\n\n");
    gets(name);
    scanf("%d",&rn);
    printf("now enter the marks of student in six subjects \n\n\n");
    scanf("%f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6);
    t=s1+s2+s3+s4+s5+s6;
    p=(t*100)/600;
    printf("student with name\n\n\n");
    puts(name);
    printf("\n\n\n and roll number %d \n\n\n have a percentage of marks %f \n\n\n and grade is \t",rn,p);
    n=p/10;
    switch( int(n))
    {
       case 9 :printf("A++");
       break;
       case 8:printf("A");
       break;
       case 7 :printf("B");
       break;
       case 6:printf("C");
       break;
       case 5: printf("D");
       break;
       case 4: printf("FAIL");
       break;

    }
    return 0;
    getch();

}
