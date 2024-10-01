#include <stdio.h>



 main()
{
    int r, c;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

	int i,j,a1[r][c],sum=0;

    printf("Enter array A :\n");
    for ( i = 0; i < r; ++i)
    {
        for ( j = 0; j < c; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }
    
    
    for ( i = 0; i < r; ++i)
    {
        for ( j = 0; j < c; ++j)
        {
        	if(i==j){
        		printf("%d",a1[i][j]);
        		sum+=a1[i][j];
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
    }
        printf("sum:%d\n",sum);
}
