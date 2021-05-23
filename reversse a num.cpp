#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num,quo,rev=0,i,ld,sum=0,n;
    printf("enter the number whose reverse you want to see\n");
    scanf("%d",&num);
    printf("\n how many digits are  there in the number ");
    scanf("%d",&n);
    i=pow(10,(n-1));
    quo=num;
    while(quo!=0)
    {
        ld=quo%10;

        rev=rev+(ld*i);
        quo=quo/10;
        i=i/10;
        sum=sum+ld;
    }
    printf("\n reverse of %d is %d",n,rev);
    printf("\n sum of digits of %d is %d",n,sum);
    getch();
}
