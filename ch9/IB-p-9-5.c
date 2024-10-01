#include<stdio.h>

	struct employee{
		int id;
		char name[20];
		int age;
		char city[20];
		char role[20];
		int exp;
		char cname[20];
	};
	
void main()
{
	int n,i;
	
	printf("enter of employee : \t");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Id : ");
		scanf("%d",&e[i].id);
		
		printf("\nEnter Name : ");
		fflush(stdin);
		scanf("%s",&e[i].name);
		
		printf("\nEnter Age : ");
		scanf("%d",&e[i].age);
		
		printf("\nEnter City : ");
		scanf("%s",&e[i].city);
		
		printf("\nEnter Role : ");
		scanf("%s",&e[i].role);
		
		printf("\nEnter Exp : ");
		scanf("%d",&e[i].exp);
		
		printf("\nEnter Company Name : ");
		scanf("%s",&e[i].cname);
		
	}
	
	printf("\n\n\nId\tName\tAge\tCity\tRole\tExp\tCname\n ====== ===== ===== ===== ===== ===== ==== ====\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t\n",e[i].id,e[i].name,e[i].age,e[i].city,e[i].role,e[i].exp,e[i].cname);
	}
	
}
