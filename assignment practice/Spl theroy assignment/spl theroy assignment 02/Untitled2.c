#include<stdio.h>
int main ()
{
    int a[4]= {0};
    int n,i;
    n=532;
    i=0;

    do
    {
        a[i]=n+i;
        if(a[i]%2!=0)
        {
            a[i]*=2;
        }
        i++;
    }
    while(i<4);
}
