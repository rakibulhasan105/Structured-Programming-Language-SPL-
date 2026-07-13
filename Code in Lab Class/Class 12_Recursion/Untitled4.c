#include <stdio.h>
void printArray(int arr[], int size, int index) {
    if (index < size) {
        printf("%d ", arr[index]);
        printArray(arr, size, index + 1);
    }
}
int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Please enter a valid array size.\n");
    } else {
        int arr[size];
        printf("Enter the array elements:\n");
        for (i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Array elements using recursion: ");
        printArray(arr, size, 0);
        printf("\n");
    }

    return 0;
}
