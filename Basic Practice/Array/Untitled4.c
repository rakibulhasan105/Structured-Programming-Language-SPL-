#include<stdio.h>
int  main ()
{
    int num;
    printf("Enter the array size: ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter all of the elements of array: ");

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int maximum=arr[0];
    for(int i=1;i<num;i++)
    {
        if(maximum<arr[i])
            maximum=arr[i];
    }
    printf("\nmaximum is: %d\n",maximum);

return 0;
}
