#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();
	printf("enter a value of a:");
	scanf("%d",&a);
	printf("enter a value of b:");
	scanf("%d",&b);

	c=a;
	a=b;
	b=c;

	printf("after swap a=%d\n",a);
	printf("after swap b=%d",b);

	getch();
}





