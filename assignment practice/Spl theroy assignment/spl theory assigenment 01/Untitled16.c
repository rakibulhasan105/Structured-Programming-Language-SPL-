#include <stdio.h>

int main() {
    int i, j;
    int n ; // Number of rows
scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf("  "); // Three spaces for alignment
        }

        // Print decreasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Print increasing numbers
        for (j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

