#include<stdio.h>
struct subject{
	int che;
	int math;
	int phy;
};
struct student{
	int roll_no;
	char name[20];
	struct subject sub;
	float per;
	int total;
};
void main(){
		int n,i;
		
		printf("enter number of student:");
		scanf("%d",&n);
		
		struct student std[n];
		
		for(i=0;i<n;i++){
			printf("enter student id:\t");
			scanf("%d",&std[i].roll_no);
			printf("enter student Name:\t");
			fflush(stdin);
			scanf("%s",&std[i].name);
			printf("enter student che_marks:\t");
			scanf("%d",&std[i].sub.che);
			printf("enter student math_marks:\t");
			scanf("%d",&std[i].sub.che);
			printf("enter student phy_mark:\t");
			scanf("%d",&std[i].sub.phy);
			
			std[i].total=(std[i].sub.che+std[i].sub.math+std[i].sub.phy);
			printf("%d\n",std[i].total);
			std[i].per=(std[i].sub.che+std[i].sub.math+std[i].sub.phy)/3.0;
			printf("%.2f\n",std[i].per);
			
		}
		printf("Roll\tName\tpersentage\tTotal\n");
		
		for(i=0;i<n;i++){
			printf("%d\t%s\t%.2f\t%d\n",std[i].roll_no,std[i].name,std[i].per,std[i].total);
		}
}
