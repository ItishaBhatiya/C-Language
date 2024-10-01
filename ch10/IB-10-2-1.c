#include<stdio.h>
#include"my_function.c"

void main()
{
	int ans,a,b,choice;
	
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.division\n");
	printf("5.Exit\n");
	printf("Enter your choice : ");
	choice=getint();
	
	printf("\n");
	
	switch(choice)
	{
		case 1:
				printf("Enter A: ");
				scanf("%d",&a);
				printf("Enter B: ");
				scanf("%d",&b);
					
				ans=sum(a,b);
				printf("\nsum of A and B answer is : %d \n ",ans);
				
		case 2:
				printf("Enter A: ");
				scanf("%d",&a);
				printf("Enter B: ");
				scanf("%d",&b);		
				
				ans=sub(a,b);
				printf("\nsubtraction of A and B answer is : %d \n ",ans);
		
		case 3:
				printf("Enter A: ");
				scanf("%d",&a);
				printf("Enter B: ");
				scanf("%d",&b);	
				
				ans=mul(a,b);
				printf("\nmultiplication of A and B answer is : %d \n ",ans);
		
		case 4:
				printf("Enter A: ");
				scanf("%d",&a);
				printf("Enter B: ");
				scanf("%d",&b);	
				
				ans=div(a,b);
				printf("\ndivison of A and B answer is : %d \n ",ans);
	}
	
}
