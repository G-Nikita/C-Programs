 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  float a,b,sum,sub,mul,div;
  nick1 :printf("enter two numbers on which you want to perform mathimatical operation ");
  scanf("%f %f",&a, &b);
  int n,m;
  nick :printf("\n enter 1 to perform addition,2 to perform subtraction,3 to perform multiplication,4 to perform divison");
  scanf("%d",&n);
  switch(n)
  {
      case 1:sum=a+b;printf("\n %f is the result",sum);goto nick2 ;break;
      case 2:sub=a-b;printf("\n %f is yhe result ",sub);goto nick2 ;break;
      case 3:mul=a*b;printf("\n %f is the result",mul);goto nick2 ;break;
      case 4:div=a/b;printf("\n %f is the result",div);goto nick2 ;break;
  }
      nick2 :
        printf("\n now enter 1 if you want to continue otherwise press 0 enter 2 if you want to enter new values to perform operationiis");
        scanf("%d",&m);
        switch(m)
        {
        case 1:
            goto nick;
            break;
            case 2:
                goto nick1;
                break;
            case 0:
                exit(1);
        }

  getch();
}
