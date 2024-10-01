#include<stdio.h>
#include<conio.h>

main()
{
	int ang1,ang2,ang3;
	clrscr();

	printf("Triangle's First Angle is : \n");
	scanf("%d",&ang1);

	printf("Triangle's Second Angle is : \n");
	scanf("%d",&ang2);

	ang3 = 180 - (ang1+ang2);

	printf("Triangle's Third Angle is : %d",ang3);

	getch();

}