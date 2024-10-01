#include <stdio.h>

int main()
{
    int r, c,i,j;
    float a[100][100], sum = 0.0, avg;
    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    printf("\nEnter array's elements:\n");
    for ( i = 0; i < r; ++i)
    {
        for ( j = 0; j < c; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
            sum += a[i][j];
        }
    }

    avg = sum / (r * c);
    printf("\nAverage of an Array: %.2f", avg);

   
}

