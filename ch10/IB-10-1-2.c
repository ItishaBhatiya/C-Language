#include<stdio.h>
void divisible()
{
	int a;
	
	printf("enter number: ");
	scanf("%d",&a);
	
	if(a%3 == 0 && a%5 == 0)
	{
		printf("The Given Number is Divisible by both 3 and 5");
	}
	else
	{
		printf("The Given Number is Not Divisible  by both 3 and 5");
	}
}
	
void main()
{
   divisible();
}


