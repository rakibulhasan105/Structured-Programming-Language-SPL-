#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size], *ptr;
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = &arr[size-1];
    for(i=size-1; i>=0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
