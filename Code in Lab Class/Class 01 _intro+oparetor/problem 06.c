#include <stdio.h>

int main() {
    double a, b, c, X, Y, Z;

    printf("Enter values for a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    X = a - b / 3 + c * 2 - 1;
    Y = a - (b / (3 + c) * 2) - 1;
    Z = a - ((b / 3) + c * 2) - 1;

    printf("X = %.2lf\n", X);
    printf("Y = %.2lf\n", Y);
    printf("Z = %.2lf\n", Z);

    return 0;
}
