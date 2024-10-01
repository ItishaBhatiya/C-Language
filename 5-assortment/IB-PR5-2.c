#include<stdio.h>

main()
{
	int r,c;
	
	printf("Enter row's size ");
	scanf("%d",&r);
	printf("enter column's size ");
	scanf("%d",&c);
	
	int a[r][c],i,j,large;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j] > large)
			{
				large=a[i][j];
			}
		}
	}
	printf("largest number of array is : %d",large);
}
