#include<stdio.h>
int  max(int a[])
{
    int x=a[0];
    for(int i=1; i<5; i++)
    {
        if(x<a[i])
        {
            x=a[i];
        }
    }

    return x;
}
int main()
{
    int num[]= {1,2,3,5,4};
    int maximum=max(num);
    printf("%d",maximum);
}
