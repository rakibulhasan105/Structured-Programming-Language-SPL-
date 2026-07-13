
#include <stdio.h>

int countDigits(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + countDigits(num / 10);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int digitCount = countDigits(num);
    printf("Number of digits in %d is %d\n", num, digitCount);

    return 0;
}
