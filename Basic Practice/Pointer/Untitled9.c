#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // Pointer to the first element of the array

    printf("Array with Index:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    printf("\nArray with Offset:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at offset %d: %d\n", i, *(arr + i));
    }

    printf("\nPointer with Index:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d using pointer: %d\n", i, p[i]);
    }

    printf("\nPointer with Offset:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at offset %d using pointer: %d\n", i, *(p + i));
    }

    return 0;
}

