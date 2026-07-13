//2d array  matrix diagonal elements sum
#include<stdio.h>
int main ()
{

    int size,sum=0;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size][size];

    printf("Enter the elements of array:\n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("A =");
    for(int i=0; i<size; i++)
    {
        printf("\t");
        for(int j=0; j<size; j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("diagonal elements: ");

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i==j)
            {
                printf("%d ",arr[i][j]);
                sum+=arr[i][j];
            }
        }
    }
    printf("\nsum= %d",sum);

    return 0;
}
