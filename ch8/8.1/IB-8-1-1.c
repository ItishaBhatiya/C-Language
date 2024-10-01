#include<stdio.h>

main()
{
	int n,i,l;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
		l++;
	}
	l=*(&a+1)-a;
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d \n",i,a[i]);
	}
	
	printf("length of array: %d",l);
}

