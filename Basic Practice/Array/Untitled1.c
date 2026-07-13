// WAP for take N integers and sum & average those number
#include<stdio.h>
int main(void)
{
    int size,sum=0;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the all elements of arrays: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
        //sum+=array[i];
    }
    printf("Print Output:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\n",array[i]);

        sum+=array[i];
    }
    printf("\nsum=%d\n",sum);

    printf("\naverage=%d\n",sum/size);
    return 0;
}
