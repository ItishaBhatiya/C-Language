#include<stdio.h>
#include<conio.h>

mai()
{
	int a;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&a);

	(a % 2 == 0)
		? printf("This Number Is Even : %d",a)
		: printf("This Number Is Odd : %d",a)
	      ;

	getch();

}