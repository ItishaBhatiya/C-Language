#include<stdio.h>
#include<conio.h>

main()
{
	int n,f,l,sum=0;
	clrscr();

	printf("Enter Any Number :");
	scanf("%d",&n);

	l = n%10;

	while(n>=10)
	{
		n = n/10;
	}
	 f=n;
	 sum = f + l;

	 printf("Total sum is : %d",sum);

	 getch();

}