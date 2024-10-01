
#include<stdio.h>
#include<conio.h>

main()
{
	int a;

	clrscr();

	printf("Enter Any Number:");
	scanf("%d",&a);

	if(a>0)
	{
		printf("This Number is Positive");
	}
	else if(a==0)
	{
		printf("This Number Is Neutral");
	}
	else{
		printf("This Number Is Nagetive");
	}
	getch();

}