#include<stdio.h>
void num2(int a[5]);
int main()
{
    int num[5]= {1,2,3,4,5};
    num2(num);
}
void num2(int a[5])
{
    for(int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
}

