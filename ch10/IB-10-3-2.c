#include<stdio.h>
#include"my_function.c"

void main()
{
	char name[20];
	
	printf("enter string : ");
	scanf("%s",&name);
	
	printf("length of string is : %d",arraylength(name));
}	

