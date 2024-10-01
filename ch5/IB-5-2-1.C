#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;

	clrscr();

	printf("Enter A:");
	scanf("%d",a);
	printf("Enter B:");
	scanf("%d",b);
	printf("Enter C:");
	scanf("%d",c);
	printf("Enter D:");
	scanf("%d",d);

	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is Biggest");
			}
			else{
				printf("D is Biggest");
			}
		}
		else{

		}
	}
	else{

	}
}