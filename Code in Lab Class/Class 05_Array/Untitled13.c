#include<stdio.h>
int main()
{
    int row, column, i, j, max, rowIndex, colIndex;
    printf("Enter the size of the row: ");
    scanf("%d",&row);
    printf("Enter the size of the column: ");
    scanf("%d",&column);
    int arr[row][column];

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0], rowIndex=0, colIndex=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                rowIndex=i;
                colIndex=j;
            }
        }
    }
printf("Maximum Element: %d , Index number: [%d][%d] ",max, rowIndex, colIndex);
    return 0;

}
