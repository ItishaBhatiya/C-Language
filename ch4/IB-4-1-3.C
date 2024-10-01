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

    a=(x*x)+(y*y)+(2*x*y);

    printf("ans of (x+y)^2 is :%d",a);
    getch();
  }
