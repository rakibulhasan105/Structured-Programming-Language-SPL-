#include <stdio.h>
int sum(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sum(n);
        printf("Sum of numbers from 1 to %d is %d\n", n, result);
    }

    return 0;
}
