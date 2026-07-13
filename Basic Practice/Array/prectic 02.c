// Fibonacci serious
#include<stdio.h>
int main(void)
{

    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
     arr[0]=0;
    arr[1]=1;
    for(int i=2;i<size;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        if(i!=size-1)
        {
            printf(",");
        }
    }



}
