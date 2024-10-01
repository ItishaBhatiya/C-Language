#include<stdio.h>

main()
{
	int n,i,sum=0,avg=1;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d \n",i,a[i]);
		sum+=a[i];
		avg=sum/n;
	}
	
	printf(" sum of array: %d\n",sum);
	printf("average of array: %d",avg);
}

