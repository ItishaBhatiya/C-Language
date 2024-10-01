#include <stdio.h>
#include <conio.h>

main() 
{
	int i,j;
	clrscr();
	
    for(i=6;i>=2;i--)
	{
        for(j=6;j>=i;j--)
		{
            if(j%2==0){
				printf("0 ");
			}
			else{
				printf("1 ");
			}
        }
        printf("\n");
    }    
    getch();
}
