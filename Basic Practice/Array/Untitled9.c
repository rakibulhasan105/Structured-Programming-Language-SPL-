//2d array  matrix addition
#include<stdio.h>
int main ()
{
    //int arr1[10][10],arr2[10][10],arr3[10][10];
    int raw,col;
    printf("Enter the raw size: ");
    scanf("%d",&raw);
    printf("Enter the coluam size: ");
    scanf("%d",&col);
    int arr1[raw][col],arr2[raw][col];
    int arr3[raw][col];//int i=0,j=0;
    printf("Enter first matrix elements :\n");
    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
//printf("\n");
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
    printf("A =");
    for(int i=0; i<raw; i++)
    {
        printf("\t");
        for(int j=0; j<col; j++)
        {
            printf("%2d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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

    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\nA+B =");
    for(int i=0; i<raw; i++)
    {
        printf("\t");
        for(int j=0; j<col; j++)
        {
            printf("%2d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
