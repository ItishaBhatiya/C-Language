#include<stdio.h>
#include<conio.h>

main()
{
  int x,y,a;
  clrscr();
    printf("enter a value of x:");
    scanf("%d",&x);
    printf("enter a value of y:");
    scanf("%d",&y);

    a=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);

    printf("ans of (x+y)^3 is :%d",a);
    getch();
  }
