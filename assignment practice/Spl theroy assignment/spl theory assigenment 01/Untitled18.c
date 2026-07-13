#include<stdio.h>
int main ()
{
    int num=5;
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num-i;j++)
        {
            printf("_");
        }
        for(int j=1;j<=1;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
