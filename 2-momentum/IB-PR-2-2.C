#include<stdio.h>
#include<conio.h>

main()
{
	float units,charges,surcharge,total_bill;
	clrscr();

	printf("Enter Units : ");
	scanf("%f",&units);

	if(units>=0 && units<=50)
	{
		charges = units * 0.50;
		printf("Yuor Amount is : %d",charges);
	}

	else if(units>=51 && units<=150)
	{
		charges = ((units-50) * 0.75) + 25.0;
		printf("Yuor Amount is : %d",charges);
	}

	else if(units>=151 && units<=250)
	{
		charges = ((units-150) * 1.20) + 112.5;
		printf("Yuor Amount is : %d",charges);
	}

	else if(units>=251)
	{
		charges = ((units-250) * 1.50) + 300.0;
		printf("Yuor Amount is : %d",charges);
	}

	else
	{
		printf("No Amount");
	}

	surcharge = charges * (20/100);
	printf("\nYour Surcharge Is : %d\n",surcharge);

	total_bill = charges + surcharge;
	printf("Your Total Electricity Bill is : %d",total_bill);

	getch();

}