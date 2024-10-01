#include<stdio.h>

int main()
{
	int n=4;
	int num = 1;
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
