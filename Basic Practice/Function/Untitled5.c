#include<stdio.h>
void power(int a,int b); //function prototype
int main()
{
    power(2,2); //function call
    power(2,3);// pass by value
    power(2,4);
    power(2,5);
}
void power(int a,int b) // function definition & formal parameter
{
    int result=1;
    for(int i=1;i<=b;i++)
    {
        result*=a;
    }
    //return result;
    printf("%d\n",result);
}
