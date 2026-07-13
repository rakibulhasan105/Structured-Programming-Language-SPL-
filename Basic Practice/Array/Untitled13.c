//2d array  matrix upper triangle & lower triangle elements sum
#include<stdio.h>
int main ()
{

    int size,uppersum=0,lowersum=0;
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


    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i<j)
            {
                uppersum+=arr[i][j];
            }
            if(i>j)
            {
                lowersum+=arr[i][j];
            }
        }
    }
    printf("\nUpper sum= %d\n",uppersum);
    printf("Lower sum= %d\n",lowersum);

    return 0;
}

