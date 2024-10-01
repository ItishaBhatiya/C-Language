#include<stdio.h>

main()
{
	
	char name[20];
	int i;
	
	printf("enter any name : ");
	scanf("%[^\n]",&name);
	
	printf("string : ");
	
	for(i=0;i<20;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			printf("%c",name[i]-32);	
		}
		else if(name[i]>=65 && name[i]<=90)
		{
			printf("%c",name[i]+32);	
		}
		
	}
	
	
}
