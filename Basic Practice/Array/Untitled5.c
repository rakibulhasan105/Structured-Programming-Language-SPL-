//linear search
#include<stdio.h>
int main ()
{
    int num[]= {10,20,2,15,22,50};
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
            break;
        }
    }
    if(possi==-1)
        printf("Not found\n");
    //else
   // printf("the position of %d is %d: ",value,possi);
    return 0;
}
