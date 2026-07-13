#include<stdio.h>
int main(){
    int row, column, i, j, det;
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
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    det = arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]) -
              arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]) +
             arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);

    printf("\nDeterminant of the matrix: %d\n", det);
    return 0;

}
