#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.142
int main()
{
    float r,l,b,a,s,s1,s2,s3,aoc,poc,aos,pos,aor,por,aot,pot;
    int n;
    nick: printf("enter radius of circle\n");
    scanf("%f",&r);
    aoc= PI*r*r;
    poc=2*PI*r;
    printf("%f is the area of circle and \t %f is the perimeter of circle\n",aoc,poc);
    printf("now enter length and breadth of rectangle\n");
    scanf("%f %f",&l,&b);
    aor=l*b;
    por=2*(l+b);
    printf("%f is the area of rectangle \t %f is the perimeter of rectangle\n",aor,por);
    printf("this time you need to enter the side of square\n");
    scanf("%f",&a);
    aos=a*a;
    pos=4*a;
    printf("%f is the area of square \t %f is the perimeter of square\n",aos,pos);
    printf("now enter the sides of triangle\n");
    scanf("%f %f %f",&s1,&s2,&s3);
    pot=s1+s2+s3;
    s=pot/2;
    aot= sqrt(s*(s-1)*(s-2)*(s-3));
    printf("%f is the perimeter of triangle \t %f is the area of triangle",pot,aot);
    printf("\n now enter 1 if you want to reset values otherwise press any key\n");
    scanf("%d",&n);
    if(n==1)
        goto nick;
    else
        exit(1);
    getch();

}
