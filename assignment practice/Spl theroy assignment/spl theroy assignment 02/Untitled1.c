#include<stdio.h>
int main ()
{
    int a[4]={0};
    int n,i;
    n=532;
    for(i=0;i<4;i++)
    {
        a[i]=n+i;
        if(a[i]%2!=0)
        {
            a[i]*=2;
        }
        printf("%d ",a[i]);
    }
}
