#include<stdio.h>
#include<conio.h>
main()
{
   int choice;
   clrscr();
   printf("enter language....\n");
   printf("1) english\n");
   printf("2) gujarati\n");
   printf("3) hindi\n");
   printf("enter your choice: ");
   scanf("%d",&choice);
	 switch(choice)
	 {
		case 1:
			 printf("1.press 1 for internet recharge...\n");
			 printf("2.press 2 for top-up recharge...\n");
			 printf("3.press 3 for special recharge..\n.");
			 printf("enter youe choice");
			 scanf ("%d",&choice);
			 switch(choice)
			 {
			   case 1:
				  printf("you have successfully  done internet recharge");
				  break;
			   case 2:
				  printf("you have successfully done top up recharge");
				  break;
			   case 3:
				  printf("you have successfully done special recharge");
				  break;
			  defult:
				 printf("invaild choice");
			  }
		case 2:
			 printf("1.internet recharge ke liye 1 dabaiye...\n");
			 printf("2.top-up recharge ke liye 2 dabaiye...\n");
			 printf("3.special recharge ke liye 3 dabaiye..\n.");
			 printf("enter youe choice");
			 scanf ("%d",&choice);
			 switch(choice)
			 {
			   case 1:
				  printf("aapne safalatapurvak  internet recharge kar liya he");
				  break;
			   case 2:
				  printf("aapne safalatapurvak top up recharge kar liya he");
				  break;
			   case 3:
				  printf("aapne safalatapurvak special recharge kar liya he");
				  break;
			  defult:
				 printf("invaild choice");
			  }
		case 3:
			 printf("1.internet recharge mate 1 dabavo...\n");
			 printf("2.top-up recharge mate 2 dabavo...\n");
			 printf("3.special recharge mate 3 dabavo..\n.");
			 printf("enter youe choice");
			 scanf ("%d",&choice);
			 switch(choice)
			{
			   case 1:
				  printf("tame safalatapurvak internet recharge karyu che");
				  break;
			   case 2:
				  printf("tame safalatapurvak top up recharge karyu che");
				  break;
			   case 3:
				  printf("tame safalatapurvak special recharge karyu che");
				  break;
			  defult:
				 printf("invaild choice");
			}
	}
     getch();
}














   

