#include<stdio.h>
int main(){
    int i, size, max, min;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0], min=arr[0];

    for(i=1; i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("Maximum is: %d , Minimum is %d\n",max,min);
    return 0;
}
