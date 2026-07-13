
#include <stdio.h>

void printEven(int start, int end) {
    if (start > end) {
        return;
    }

    if (start % 2 == 0) {
        printf("%d ", start);
    }

    printEven(start + 1, end);
}

void printOdd(int start, int end) {
    if (start > end) {
        return;
    }

    if (start % 2 != 0) {
        printf("%d ", start);
    }

    printOdd(start + 1, end);
}

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers in the range %d to %d: ", start, end);
    printEven(start, end);
    printf("\n");

    printf("Odd numbers in the range %d to %d: ", start, end);
    printOdd(start, end);
    printf("\n");

    return 0;
}
