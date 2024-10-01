#include<stdio.h>

main()
{
	char a[20];
	
	int i,j,count;
	
	printf("Enter string :");
	scanf("%s",&a);
	
	for(i=0;a[i] !=NULL;i++)
	{
		count=1;
		for(j=i+1;a[j] !=NULL;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		printf("%c : %d\n",a[i],count);
	}
}

