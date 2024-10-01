#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,ans,qty;
	float amount;

	clrscr();

	printf("Enter value A:");
	scanf("%d",&a);
	printf("enter qty:");
	scanf("%d",&qty);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("enter qty:");
	scanf("%d",&qty);
	printf("Enter value C:");
	scanf("%d",&c);
	printf("enter qty:");
	scanf("%d",&qty);


	ans=(a*qty)+(b*qty)+(c*qty);
	printf("Answer:%d\n",ans);


	amount=ans+(ans*0.18);
	printf("Your Total Amount With Gst:%.2f",amount);

	getch();
}