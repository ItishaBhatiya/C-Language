#include<stdio.h>
#include<conio.h>

main()
{
	char A='a';
	clrscr();

	do{
		printf("%c,",A);
		A = A + 4;
	}while(A <= 'z');

	getch();

}