#include<stdio.h>
int factorial(int num);

int main()
{
    printf("Factorial of n is : %d",factorial(10));
    return 0;
}

int factorial(int num)
{
    if(num == 0){
        return 1;
    }
    int factNm1=factorial(num-1);
    int factN=factNm1*num;
    return factN;
}