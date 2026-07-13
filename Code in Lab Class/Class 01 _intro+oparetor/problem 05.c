#include <stdio.h>
int num = 10; // Global variable
int main() {
    printf("A. Global: %d\n", num);
    int num = 20; // Local variable with the same name
    printf("B. Local: %d\n", num);
   return 0;
}
