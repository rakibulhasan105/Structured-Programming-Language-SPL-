#include<stdio.h>
int main()
{
 int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=num; i>=1; i--)
    {
        for(int j=1; j<=num; j++)
        {
            printf(" *");
        }

        printf("\n");
    }
    return 0;
}

