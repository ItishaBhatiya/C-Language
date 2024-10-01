#include <stdio.h>
 main()
{
    int r, c;
    
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

	int i,j,a1[r][c], a2[r][c], s[r][c];

    printf("Enter array A :\n");
    for ( i = 0; i < r; ++i)
    {
        for ( j = 0; j < c; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }

    printf("\nEnter array B's elements:\n");
    for ( i = 0; i < r; ++i)
    {
        for ( j = 0; j < c; ++j)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &a2[i][j]);
            
        }
    }

    
    for (i = 0; i < r; ++i)
    {
        for ( j = 0; j < c; ++j)
        {
            s[i][j] = a1[i][j] + a2[i][j];
            printf("%d",s[i][j]);
        }
        printf("\n");
    }

}

