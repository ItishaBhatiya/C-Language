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
	printf("enter of employee :\t");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter id:");
		scanf("%d",&e[i].id);
		
		printf("enter name:\t");
		fflush(stdin);
		scanf("%s",&e[i].name);
		
		printf("enter age:\t");
		scanf("%d",&e[i].age);
		
		printf("enter city:\t");
		fflush(stdin);
		scanf("%s",&e[i].city);
		
		printf("enter role:\t");
		scanf("%s",&e[i].role);
		
		printf("enter exp:\t");
		scanf("%d",&e[i].exp);
		
		printf("enter cname:\t");
		scanf("%s",&e[i].cname);
	
	}
	
	printf("\n\n\nId\tName\tAge\tCity\tRole\tExp\tCnamr \n====== ===== ===== ===== ===== ===== ==== ====\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%d\t%s\t\n",e[i].id,e[i].name,e[i].age,e[i].city,e[i].role,e[i].exp,e[i].cname);	
	}
}

