#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,s;
	clrscr();

	for(i=1;i<=5;i++){
		for(s=i;s<5;s++){
			printf(" ");
		}
		for(j=i;j>=i;j--){
			printf("%d",j);
		}
		printf("\n");
	}

	getch();

}