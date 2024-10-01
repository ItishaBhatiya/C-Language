#include<stdio.h>

main()
{
	int r,c;
	printf("enter row size ");
	scanf("%d",&r);
	printf("enter column size ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum,sum2,row=0,col=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	printf("enter row number : ");
	scanf("%d",&row);
	printf("\n");
	printf("elements of row %d : %d",row,a[i][j]);
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==row)
			{
				printf("%d",a[i][j]);
				sum = sum+a[i][j];
			}
		}
		printf("\n");
	}
	
	printf("enter column number : ");
	scanf("%d",&col);
	printf("\n");
	printf("elements of column %d : %d",col,a[i][j]);
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==col)
			{
				printf("%d",a[i][j]);
				sum2 = sum2+a[i][j];
			}
		}
		printf("\n");
	}
	
	printf("row sum %d",sum);
	printf("\n");
	printf("column sum %d",sum2);
	
}
