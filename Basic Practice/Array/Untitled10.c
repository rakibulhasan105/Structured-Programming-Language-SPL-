//2d array  matrix multiplication
#include<stdio.h>
int main ()
{
    int arr1[10][10],arr2[10][10],result[10][10],r1,r2,c1,c2,sum=0;

    printf("Enter the raws and column for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the rows and column for second matrix: ");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error!! column of first matrix not equal to  raw of second matrix \n");
        printf("Enter the raws and column for first matrix: ");
        scanf("%d%d",&r1,&c1);
        printf("Enter the rows and column for second matrix: ");
        scanf("%d%d",&r2,&c2);

    }
    printf("Enter first matrix elements :\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Enter second matrix elements: \n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("arr2[%d][%d]=",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    printf("A =");
    for(int i=0; i<r1; i++)
    {
        printf("\t");
        for(int j=0; j<c1; j++)
        {
            printf("%2d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B =");
    for(int i=0; i<r2; i++)
    {
        printf("\t");
        for(int j=0; j<c2; j++)
        {
            printf("%2d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("Result:");
    for(int i=0; i<r1; i++)
    {
        printf("\t");
        for(int j=0; j<c2; j++)
        {
            printf("%2d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
