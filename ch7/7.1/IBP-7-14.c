#include <stdio.h>
#include <conio.h>

main() 
{
	int i,j;
	clrscr();
	
    for(i=5;i>=1;i--)
	{
        for(j=i;j<=i;j++)
		{
            printf("* ");
        }
        printf("\n");
    }    
    getch();
}
