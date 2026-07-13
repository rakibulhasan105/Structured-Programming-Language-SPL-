#include<stdio.h>
int main(){
    int size, i, *ptr;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the value of array: \n");
    for(i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<size; i++){
        printf("%d ",*ptr);
        ptr++;
    }

    return 0;
}