#include<stdio.h>
int main()
{
    int i, size, sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the elements of the array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(i%2==0)
        {
            sum=sum+arr[i];
        }
    }

    printf("The sum is: %d ",sum);
    return 0;
}
