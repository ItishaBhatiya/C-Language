#include<stdio.h>
#include<conio.h>

main()
{
	int first,second,i;
	clrscr();

	printf("Enter First Number: ");
	scanf("%d",&first);
	printf("Enter Second Number: ");
	scanf("%d",&second);

	i=first;
	while(i<=second)
	{
	  if(i%4 == 0)
	  {
		printf("%d",i);
	  }
	  i++;
	}

	getch();

}