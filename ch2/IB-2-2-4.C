#include<stdio.h>
#include<conio.h>
main()
{
  float p,r,n;
  clrscr();
  printf("enter a value of p:");
  scanf("%f",&p);
  printf("enter a value of r:");
  scanf("%f",&r);
  printf("enter a value of n:");
  scanf("%f",&n);


  printf("simple intrest:%f",p*r*n/100);
  getch();
}