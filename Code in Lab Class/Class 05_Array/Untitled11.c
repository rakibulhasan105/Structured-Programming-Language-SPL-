#include<stdio.h>
int main(){
    int dimension, i, j;
    printf("Enter the dimension: ");
    scanf("%d",&dimension);
    int arr[dimension][dimension];

    for(i=0;i<dimension;i++){
        for(j=0;j<dimension;j++){
            if(i==j){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    for(i=0;i<dimension;i++){
        for(j=0;j<dimension;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}

