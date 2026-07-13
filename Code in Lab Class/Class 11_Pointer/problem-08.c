#include <stdio.h>
int main() {
    int size, i, sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size], *ptr;
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for(i=0;i<size; i++){
        sum=sum + *ptr;
        ptr++;
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}