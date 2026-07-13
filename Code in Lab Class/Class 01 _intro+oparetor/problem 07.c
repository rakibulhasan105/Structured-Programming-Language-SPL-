#include <stdio.h>
//#include <math.h>

int main() {
    double X, A, B, C;
    printf("Enter a floating-point number X: ");
    scanf("%lf", &X);
    A = ceil(X);
    B = floor(X);
    C = fabs(X);
    printf("A = %.0lf, B = %.0lf, C = %.2lf\n", A, B, C);

    return 0;
}
