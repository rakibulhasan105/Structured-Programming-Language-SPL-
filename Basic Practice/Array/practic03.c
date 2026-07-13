//linear search
#include<stdio.h>
int main ()
{
    int num[] = {10,20,2,15,22,20};
    int value;
    int possi=-1;
    printf("Enter the value you want to search: ");
    scanf("%d",&value);
    for(int i=0; i<=5; i++)
    {
        if(value==num[i])
        {
            possi=i+1;
            printf("the position of %d is %d \n",value,possi);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
