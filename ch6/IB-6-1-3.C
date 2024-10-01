#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	clrscr();

	printf("Enter Number:");
	scanf("%d",&n);

	i=1;
	while(i<=n){
		printf("%d\n",i);
		i++;
	}

	getch();

}