#include<stdio.h>
#include<string.h>
int array(char str1[20],char str2[20])
{
	int a=0;
	strcpy(str2,str1);
	strrev(str2);
	a = strcmp(str1,str2);
	return a; 
	
}
void main()
{
	char str1[20],a,str2[20];
	
	printf("enter string : ");
	scanf("%s",&str1);
	
	a = array(str1,str2);
	if(a == 0)
	{
		printf("this is palindrome!!!");
	}
	else 
	{
		printf("this is non palindrome!!!");
	}
}
