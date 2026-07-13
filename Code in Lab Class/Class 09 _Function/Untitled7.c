#include<stdio.h>
int arrayMinValue(int arr[], int n){
    int min=arr[0],i;
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size,i,min;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the all elements of Array: ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    min=arrayMinValue(arr,size);
    printf("Minimum value is: %d",min);
}
