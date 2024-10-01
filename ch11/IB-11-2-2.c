#include<stdio.h>

void main()
{
	chainofpointer();
}

void chainofpointer()
{
	int a = 10;
	
	int *ptr1;	
	int **ptr2;
	int ***ptr3;
		
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	
	**ptr2 = 20;
	
	printf("a\t : %d\n",a);
	printf("p1\t : %d\n",*ptr1);
	printf("p2\t : %d\n",**ptr2);
	printf("p3\t : %d\n",***ptr3);
	
}
