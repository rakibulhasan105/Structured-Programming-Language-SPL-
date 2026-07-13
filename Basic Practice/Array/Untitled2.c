//write a program that can take some numbers & display maximum
#include<stdio.h>
int main ()
{
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter arrays: ");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0];
    for(int i=1;i<size;i++)
    {
        if(max<array[i])
            max=array[i];
    }
    printf("Maximum: %d",max);
    return 0;
}
