#include <stdio.h>
int main() {
    int x = 10;
    int *p =&x;; // Pointer p holds the address of x

    printf("Value of x: %d\n", x); // 10
    printf("Address of x: %p\n", &x); // memory address
    printf("Value at address stored in p: %d\n",*p); // 10

    return 0;
}

