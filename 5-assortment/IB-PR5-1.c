#include<stdio.h>

main()
{
	int n;
	printf("enter size of array");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("negative array is:");
	for(i=0;i<n;i++)
	{
		if(a[i]<0){
			printf("%d",a[i]);
		}
		else{
			printf(" ");
		}
	}
}
