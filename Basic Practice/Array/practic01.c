//write a program that can take some numbers & display maximum
#include<stdio.h>
int main(void)

{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the all elements of array: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    printf("Print Output: \n%d\n",array[0]);
    for(int i=1;i<size;i++)
    {
        printf("%d\n",array[i]);
        if(max<array[i])
            max=array[i];
    }

    printf("\nMaximum: %d",max);
return 0;


}
