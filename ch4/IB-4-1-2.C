#include<stdio.h>
#include<conio.h>

main()
{
  int a,b;
  clrscr();
  printf("enter a value of a:");
  scanf("%d",&a);
  printf("enter a value of b:");
  scanf("%d",&b);

   a=a+b;//a:20+10=30
   b=a-b;//b=20-10=10
   a=a-b;//a=30-10=20

   printf("after swaping a:%d\n",a);
   printf("after swaping b:%d",b);
   getch();
  }