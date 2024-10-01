#include<stdio.h>

main()
{
	char a[10];
	int i,o=0,u=0,l=0,len=0,s=0;
	
	printf("Enter any password:");
	scanf("%s",&a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			u++;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			l++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			o++;
		}
		else{
			s++;
		}
	}
	
	len=strlen(a);
	if(len>=8 && o>=1 && u>=1 && l>=1 && s>=1)
	{
		printf("Your password is strong ");
	}
	else{
		printf("Your password is not strong ");
	}
	printf("\n lenth %d",len);
	printf("\n digit %d",o);
	printf("\n upper %d",u);
	printf("\n lower %d",l);
	printf("\n symbol %d",s);
}

