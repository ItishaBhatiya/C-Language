#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;

	clrscr();

	printf("Enter a:");
	scanf("%d",&a);

	printf("Enter b");
	scanf("%d",&b);

	if (a<b)
	{
		printf("Minimum Value is:%d",a);
	}
	else if (a==b)
	{
		printf("both are same");
	}
	else{
		printf("minimum Value is:%d",b);
	}

	getch();

}