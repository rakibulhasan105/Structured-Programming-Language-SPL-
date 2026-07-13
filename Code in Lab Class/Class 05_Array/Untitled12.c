#include<stdio.h>
int main(){
    int row, column, i, j;
    printf("Enter the size of the row: ");
    scanf("%d",&row);
    printf("Enter the size of the column: ");
    scanf("%d",&column);
    int matrix1[row][column],matrix2[row][column], sumMatrix[row][column];

    printf("Enter the value of first matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the value of second matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            sumMatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",sumMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;

}
