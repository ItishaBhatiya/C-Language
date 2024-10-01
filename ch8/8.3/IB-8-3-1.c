#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter row size:");
	scanf("%d",&r);
	printf("Enter column size:");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	float sum=0,avg=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter array a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum += a[i][j];
		}
	}
	printf("\n");
	
	avg = sum / (r*c);
	printf("average's of all elements : %.2f",avg);
	
}
