#include<stdio.h>

void main()
{
	int a,b;
	int *ptr1,*ptr2;
	
	ptr1=&a;
	ptr2=&b;
	
	printf("Enter A:");
	scanf("%d",ptr1);
	
	printf("Enter B:");
	scanf("%d",ptr2);
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
	printf("A :%d\n B :%d\n",a,b);
	
}
