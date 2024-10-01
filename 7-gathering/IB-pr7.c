#include<stdio.h>

int sum(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}

int mod(int a,int b)
{
	return a%b;
}

int first()
{
	int a;
	printf("Enter A : ");
	scanf("%d",&a);
	return a;
}

int second()
{
	int b;
	printf("Enter B : ");
	scanf("%d",&b);
	return b;
}


void calc()
{
	int a,b,choice;

	do
	{
		printf("Press 1 for + \n");	
		printf("Press 2 for - \n");
		printf("Press 3 for * \n");
		printf("Press 4 for / \n");
		printf("Press 5 for %% \n");
		printf("Press 0 for the EXIT \n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		
	switch(choice)
	{
		case 1:
			a=first(a);
			b=second(b);
			
			printf("\n ADDITION : %d \n",sum(a,b));
			break;
			
		case 2:
			a=first(a);
			b=second(b);
			
			printf("\n SUBTRACTION : %d \n",sub(a,b));
			break;
			
		case 3:
			a=first(a);
			b=second(b);
			
			printf("\n MULTIPLICATION : %d \n",mul(a,b));
			break;
			
		case 4:
			a=first(a);
			b=second(b);
			
			printf("\n DIVISON : %d \n",div(a,b));
			break;
			
		case 5:
			a=first(a);
			b=second(b);
			
			printf("\n MODULS : %d \n",mod(a,b));
			break;
		
		case 0:
			break;
			
		default:
			printf("\n");
			main();
	}
	
	}
	while(choice != 0);
}

void main()
{
	calc();
}















