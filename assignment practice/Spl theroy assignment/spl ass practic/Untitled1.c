#include <stdio.h>
int main() {
    int n = 9; // You can change this value to generate a different pattern
    int i, j, k;
    int num;

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = n; j > i; j--) {
            printf("_");

        }
        // Print numbers
        num = 1;
        for (k = 1; k <= i; k++) {
            printf("%d",num);
            num += 2;
            if (num > n) {
                num = 1;
            }
        }

printf("\n");
    }
return 0;
}

