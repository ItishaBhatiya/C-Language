#include<stdio.h>
#include<conio.h>

main()
{
	int n,digit=0;
	clrscr();

	printf("Enter Any Number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		n = n/10;
		digit++;
	}
	printf("This Number : %d",digit);

	getch();

}