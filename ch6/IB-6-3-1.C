#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();

	printf("Enter Number : ");
	scanf("%d",&n);

	for(i=1; i<=n; i++)
	{
	       sum = sum + i;

	}

	printf("Total Sum Is: %d",sum);
	getch();
}
