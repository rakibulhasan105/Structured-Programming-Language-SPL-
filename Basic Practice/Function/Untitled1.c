#include<stdio.h>
void  sum(a,b); //function prototype
int main(void)
{
    sum(10,10);
    //printf("%d",sum);
    //printf("\n%d\n",sum(30,30));
    sum(30,30);
    int sub=a(20,10);
    printf("%d",sub);
}
void sum(int a,int b)  // function definition + +
{
    printf("%d\n",a+b);
    //return a+b;
    //printf("%d",sum);
}

int a(int m,int b)
{
    return m-b;
}
