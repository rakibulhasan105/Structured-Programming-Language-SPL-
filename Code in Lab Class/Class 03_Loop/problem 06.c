// Fibonacci series
#include <stdio.h>
int main() {
    int N, firstTerm = 0, secondTerm = 1, nextTerm;;

    printf("Enter the number of terms: ");
    scanf("%d", &N);

    printf("Fibonacci series up to %d terms:\n", N);

    for (int i = 1; i <= N; i++) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
return 0;
}
