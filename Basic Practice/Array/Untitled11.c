//2d array  matrix transpose
#include<stdio.h>
int main ()
{
    int arr1[10][10],arr2[10][10];
    int raw,col;
    printf("Enter the raw size: ");
    scanf("%d",&raw);
    printf("Enter the column  size: ");
    scanf("%d",&col);
    //int arr1[raw][col],arr2[raw][col];

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

    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
    printf("Transpose matrix: \n");


    for(int i=0; i<col; i++)
    {

        for(int j=0; j<raw; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");

    }

    return 0;
}

