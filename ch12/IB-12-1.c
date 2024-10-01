#include<stdio.h>

struct student{
	int id;
	char name[20];
	int age;
	char  course[20];
	char school[20];
	char city[20];
	char std[20];
};

void main()
{
	int n,i;
	
	printf("enter the number of students :");
	scanf("%d",&n);
	
	struct student stud[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter id:\t");
		scanf("%d",&stud[i].id);
		
		printf("enter name:\t");
		fflush(stdin);
		scanf("%s",&stud[i].name);
		
		printf("enter age:\t");
		scanf("%d",&stud[i].age);
		
		printf("enter course:\t");
		fflush(stdin);
		scanf("%s",&stud[i].course);
		
		printf("enter school:\t");
		scanf("%s",&stud[i].school);
		
		printf("enter city:\t");
		scanf("%s",&stud[i].city);
		
		printf("enter std:\t");
		scanf("%s",&stud[i].std);
	}
	
	printf("\n\n\nId\tName\tAge\tCourse\tSchool\tCity\tstd \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t%s\t%d\t%s\t%s\t%s\t%s\t\n",stud[i].id,stud[i].name,stud[i].age,stud[i].course,stud[i].school,stud[i].city,stud[i].std);	
	}

}
