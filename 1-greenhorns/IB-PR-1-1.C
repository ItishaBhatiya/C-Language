#include<stdio.h>
#include<conio.h>

main()
{
	int c,f;
	clrscr();

	printf("The Temperature in calsius is: ");
	scanf("%d",&c);

	f= c*(9/5)+32;

	printf("The Temperature in Fahrenheit is: %d",f);

	getch();

}