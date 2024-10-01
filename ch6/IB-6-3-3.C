#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("Enter Number: ");
	scanf("%d",&n);

	for(i=1; i<=10; i++)
	{
		printf("\n%d x %d = %d \n",n,i,i*n);
	}

	getch();

}