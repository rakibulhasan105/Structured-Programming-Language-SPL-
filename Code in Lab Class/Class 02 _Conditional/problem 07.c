#include <stdio.h>
int main() {
    float number1, number2;
    char op;
    printf("Enter input like <number1> <operator> <number2>: ");
    scanf("%f %c %f", &number1, &op, &number2);
    if (op == '+') {
        printf("Addition: %.2lf\n", number1 + number2);
    } else if (op == '-') {
        printf("Subtraction: %.2lf\n", number1 - number2);
    } else if (op == '*') {
        printf("Multiplication: %.2lf\n", number1 * number2);
    } else if (op == '/') {

        if (number2 != 0) {
            printf("Division: %.2lf\n", number1 / number2);
        } else {
            printf("Zero as divisor is not valid!\n");
        }
    } else {
        printf("Invalid operator entered.\n");
    }

    return 0;
}
