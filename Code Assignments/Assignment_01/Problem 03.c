// 2D-Array
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows (m): ");
    scanf("%d",&m);
    printf("Enter the number of columns (n): ");
    scanf("%d",&n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    long long int product = 1;
    for (int j=0; j<n; j++)
    {
        product*=matrix[0][j];
    }
    for (int j=0; j<n; j++)
    {
        product*=matrix[m-1][j];
    }
    for (int i=1; i<m-1; i++)
    {
        product*=matrix[i][0];
    }
    for (int i=1; i<m-1; i++)
    {
        product*=matrix[i][n-1];
    }

    printf("The product of the border elements is: %lld\n",product);
    return 0;
}


