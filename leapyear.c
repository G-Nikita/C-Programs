#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n;
    printf("\n enetr the year\n");
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||(n%400==0))
        printf("\n year is leap");
    else
        printf("year is not leap");
    getch();
}
