#include <stdio.h>

int main() {
    int n,i;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("\nEnter array elements:\n");
    for (i = 0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nOutput:\nThe squares are: ");
    for (i = 0; i <n; i++) {
        printf("%d", a[i] * a[i]);

        
        if (i <n- 1) {
            printf(", ");
        }
    }
    printf("\n");

   
}

