#include <stdio.h>

void printPattern() {
    int n = 7; // Size of the pattern

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == n-i-1) {
                printf("Z");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    printPattern();
    return 0;
}

