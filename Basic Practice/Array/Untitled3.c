//Fibonacci serious
// 0,1,1,2,3,5,8,13,21........
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    arr[0]=0;
    arr[1]=1;
    //printf("%d,%d,",arr[0],arr[1]);
    // int arr[size];
    for(int i=2; i<size; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        //printf("%d",arr[i]);
        //if(i!=size-1)
        //printf(",");
}
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
        {
            if(i!=size-1)
                printf(",");
            }
    }
return 0;
}
