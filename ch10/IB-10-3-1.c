#include<stdio.h>
#include"my_function.c"

void main()
{
	int n,sum;
	printf("enter length of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayinput (a,n);
	arraysum(a,n);
	
}

