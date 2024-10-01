#include<stdio.h>
#include<conio.h>

main()
{
	int base_salary,hra,da,ta,gross_salary;
	clrscr();

	printf("Employee's Base_Salary is : \n");
	scanf("%d",&base_salary);

	hra= base_salary *(10/100);
	printf("Employee's HRA is : %d\n",hra);

	da= base_salary *(5/100);
	printf("Employee's DA is : %d\n",da);

	ta= base_salary *(8/100);
	printf("Employee's TA is : %d\n",ta);

	gross_salary= base_salary + (hra+da+ta);
	printf("Employee's Gross_Salary is : %d\n",gross_salary);

	getch();

}