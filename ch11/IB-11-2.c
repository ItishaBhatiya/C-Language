#include<stdio.h>

void main()
{
	int n,i;
	int *ptr,*p1;
	
	p1 = &n;
	printf("Enter any number : ");
	scanf("%d",p1);
	
	int a[n];	
	ptr = &a;
	
	for(i=0;i<n;i++)
	{
		printf("Enter  a[%d] :",i);
		scanf("%d",ptr+i);
	}
	
	printf("\n\nSquare of array elements.. \n\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : %d\t\n ",i,*(ptr+i) * *(ptr+i));
	}
}
