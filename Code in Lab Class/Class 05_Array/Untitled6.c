#include<stdio.h>
int main(){
    int i, size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr1[size],arr2[size],sumArray[size];

    printf("Enter the elements of the first array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of the second array: \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr2[i]);
         sumArray[i]=arr1[i]+arr2[i];
    }

    /*for(i=0; i<size;i++){
        sumArray[i]=arr1[i]+arr2[i];
    }*/
    printf("The sum array is here: \n");
    for(i=0;i<size;i++){
        printf("%d ",sumArray[i]);
    }


    return 0;
}
