//2D array
#include<stdio.h>
int main(){
    int row, column, i, j;
    printf("Enter the size of the row: ");
    scanf("%d",&row);
    printf("Enter the size of the column: ");
    scanf("%d",&column);
    int arr[row][column];

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}
