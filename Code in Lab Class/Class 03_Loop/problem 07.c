#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            printf("Skipping %d (multiple of 3)\n", i);
            continue;
        }
        if (i == 7) {
            printf("Reached 7. Program stopped\n");
            break;
        }
        printf("%d\n", i);
    }

    return 0;

}
