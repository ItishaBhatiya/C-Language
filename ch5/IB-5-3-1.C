#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;

	clrscr();

	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("Enter C: ");
	scanf("%d",&c);

	if(a<b){
		if(a<c){
			printf("A is Smallest");
		}
		else{
			printf("C is Smallest");
		}
	}
	else{
		if(b<c){
			printf("B is Smallest");
		}
		else{
			printf("C is Smallest");
		}

	}

	getch();
}