#include<stdio.h>
int main()
{
    int num[5]={1,2,3,4,5};
    //int *ptr=&num[0];         same as well
    int *ptr=num;
    for(int i=0;i<5;i++)
    {
        printf("Array with index: %d is %d \n",i,num[i]);
    }
    printf("\n");

    for(int i=0;i<5;i++)
    {
        printf("Array with ofset: %d is %d\n",i,*(num+i));
    }
    printf("\n");

    for(int i=0;i<5;i++)
    {
        printf("Pointer with index: %d is %d\n",i, ptr[i]);
    }
    printf("\n");

    for ( int i = 0; i < 5; i++)
    {
        printf("Pointer with ofset: %d is %d\n",i,*(ptr+i));
    }
    printf("\n");
 return 0;
}