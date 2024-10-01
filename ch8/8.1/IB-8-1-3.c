#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],sum[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
		printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
		printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d \n",i,a[i]);
	}
	
		printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] : %d \n",i,b[i]);
	}
	
	sum[i]=a[i]+b[i]; 
	
	printf(" sum of two array is: %d\n",sum);
	
	
}

