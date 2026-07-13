#include<stdio.h>
int main(){
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
