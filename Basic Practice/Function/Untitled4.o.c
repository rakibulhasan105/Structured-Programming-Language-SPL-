#include<stdio.h>
void power(int a,int b); //function prototype
int main()
{
    int base,exe;
    printf("enter base: ");
    scanf("%d",&base);
    printf("Enter exe: ");
    scanf("%d",&exe);
    power(base,exe);  // Actual parameter

    //int res = power(base,exe);
   // printf("%d",res);
}
void power(int a,int b)   // Function definition & Formal parameter
{
    int result=1;
    for(int i=1;i<=b;i++)
    {
        result*=a;
    }
    //return result;
    printf("%d",result);
}
