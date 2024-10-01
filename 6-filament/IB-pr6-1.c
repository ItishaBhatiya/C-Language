#include<stdio.h>

main()
{
	char a[20],rev[20];
	int i,j,length,count=0;
	
	printf("Enter string :");
	scanf("%s",&a);
	
	for(i=0;a[i] != NULL;i++)
	{
		length++;
	}
	
	j=length-1;
	
	for(i=0;i<length;i++)
	{
		if(a[i]==a[j])
		{
			count++;
		}
		j--;
	}
	printf("\n");
	
	if(length==count)
	{
		printf("this is a palindrome number");
	}
	else{
		printf("this is not a palindrome number");
	}
}
