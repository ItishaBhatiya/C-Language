#include<stdio.h>

main()
{
	int n1,n2;
	
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	
	int a[n1],b[n2],i;
	
	for(i=n1;i<=n2;i++)
	{
		if(((i%4==0) && ((i%400==0) || (i%100!==0)))){
			printf("%d \n",&i);
		}
		}
	}

