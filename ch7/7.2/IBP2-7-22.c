#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,s,space=0;
	clrscr();
	
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		space++;
		for(j=5;j>=i;j--)
		{
			if(j%2==0){
				printf("|");
			}
			else{
				printf("-");
			}
		}
		printf("\n");
	}
	getch();
}