//2d array matrix
#include<stdio.h>
int main ()
{
    //int arr[3][4]={{2,3,4,5},{12,13,14,15},{22,23,24,25}};
    int raw,col;
    printf("Enter the raw size: ");
    scanf("%d",&raw);
    printf("Enter the column size: ");
    scanf("%d",&col);
    int arr[raw][col],arr2[raw][col];//int i=0,j=0;
    printf("Enter first matrix elements :\n");
    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("A =");
    for(int i=0; i<raw; i++)
    {
        printf("\t");
        for(int j=0; j<col; j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter second matrix elements: \n");
    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("arr2[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    printf("B =");
    for(int i=0; i<raw; i++)
    {
        printf("\t");
        for(int j=0; j<col; j++)
        {
            printf("%2d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

