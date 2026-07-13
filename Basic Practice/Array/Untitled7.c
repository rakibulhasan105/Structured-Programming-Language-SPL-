//2d array
#include <stdio.h>
int main()
{
    //int arr[3][4]={{2,3,4,5},{12,13,14,15},{22,23,24,25}};
    int raw,col;
    printf("Enter the raw size: ");
    scanf("%d",&raw);
    printf("Enter the column size: ");
    scanf("%d",&col);
    int arr[raw][col];
    //int i=0,j=0;

    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
        //printf("Enter %d raw:",i+1);
    }
printf("Array2:\n");
    for(int i=0; i<raw; i++)
    {
        printf("\t");
        for(int j=0; j<col; j++)
        {
            printf("%2d ",arr[i][j]);
        }

        printf("\n");
    }
    return 0;
}

