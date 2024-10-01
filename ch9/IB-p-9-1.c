#include <stdio.h>

int main() {
    int a[3][3], i, j, sum1 = 0, sum2 = 0;

    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

   
    for (i = 0; i < 3; ++i) {
        sum1 += a[i][i];
    }


    for (i = 0; i < 3; ++i) {
        sum2 += a[i][2 - i];
    }

    printf("Sum of diagonal elements: %d\n", sum1);
    printf("Sum of anti-diagonal elements: %d\n", sum2);

}


