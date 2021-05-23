#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;


         printf("enter three numbers among which you want to find greatest and smallest\n");
    scanf("%d %d  %d ",&a,&b,&c);
    if(a>b&&a>c)
    {


        printf("%d is greatest\n",a);
    }
    if(b>a&&b>c)
    {


        printf("%d is greatest\n",b);
    }
    if(c>a&&c>b)
    {


    printf("%d is the greatest\n ",c);
    }
   /*  if(a<b&&a<c)
    {


        printf("%d is the smallest\n",a);
    }
    if(b<c&&b<c)
    {


        printf("%d is the smallest",b);
    }
    if(c<a&&c<b)
    {


        printf("%d is the smallest\n",c);
    }
   // printf("now enter 1 if you want  to reset values or press any key to continue");
  //  scanf("%d",&n);
  //  if(n==1)
       // goto nick;
//
    //else
   // {
        //exit(0);
    //}*/
    getch();



}
