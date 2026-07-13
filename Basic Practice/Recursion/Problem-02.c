#include<stdio.h>

int sum(int n);  // function prototype

int main()
{
    printf("sum of 5 num: %d",sum(5));

    return 0;
}

int sum(int n)   // function defination 
{
    if(n==1){
        return 1;
    }
    int sumNm1=sum(n-1);
    int sumN=sumNm1+n;
    return sumN;
}