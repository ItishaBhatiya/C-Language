#include <stdio.h>

int cube(int num)
{
    return num * num * num;
}
int main()
{
    int array[10][10], *ptr, n, i, j;
    printf("Enter array's size: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    
    ptr = &array[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", ptr);
            ptr++;
        }
    }
    printf("Cubes of all elements:\n");
    
    ptr = &array[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", cube(*ptr));
            ptr++;
        }
        printf("\n");
    }

}

