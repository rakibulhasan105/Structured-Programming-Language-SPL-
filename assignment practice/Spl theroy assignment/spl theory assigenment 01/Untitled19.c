#include<stdio.h>
int main ()
{
    int num=5,k=1;
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num-i; j++)
        {
            printf("_");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d",k);
            k++;
            if(k>5)
                k=1;
        }

        printf("\n");
    }
    return 0;
}
