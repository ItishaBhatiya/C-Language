#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact=1;
	clrscr();

	printf("Enter Number : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
		fact=fact*i;

	}

	printf("Total Factorial Is: %d",fact);
	getch();
}