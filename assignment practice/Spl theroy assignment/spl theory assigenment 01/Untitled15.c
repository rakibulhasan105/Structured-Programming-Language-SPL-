#include <stdio.h>

int main() {
    int i, j;
    int n = 7; // Number of rows and columns

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            // Print asterisk at the appropriate positions
            if (i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

