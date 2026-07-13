#include<stdio.h>
int main ()
{

    int j=10;
    while(j>0)
    {
        int k=j;
        while(k>0)
        {
            printf("%d ",k);
            k--;
        }
        printf("\n");
        j--;
    }

    return 0;
}

