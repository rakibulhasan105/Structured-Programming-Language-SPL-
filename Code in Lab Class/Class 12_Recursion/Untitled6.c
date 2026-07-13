
#include <stdio.h>

int findLargest(int arr[], int size, int index, int currentMax) {
    if (index == size) {
        return currentMax;
    } else {
        if (arr[index] > currentMax) {
            currentMax = arr[index];
        }
        return findLargest(arr, size, index + 1, currentMax);
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

        int largest = findLargest(arr, size, 0, arr[0]);
        printf("Largest element in the array is %d\n", largest);
    }

    return 0;
}

