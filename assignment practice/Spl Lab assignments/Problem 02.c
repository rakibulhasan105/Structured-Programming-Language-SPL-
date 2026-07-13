//Second largest number-Using Array
#include<stdio.h>
int main ()
{
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for(int i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0; i<num; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    //printf("%d\n",max);
    int second_max=arr[0];

    for(int i=0; i<num; i++)
    {
        if(max!=arr[i] &&  max>second_max && second_max<arr[i])
        {
            second_max=arr[i];
        }
    }
    printf("\nThe second largest number is %d\n",second_max);
    return 0;
}

