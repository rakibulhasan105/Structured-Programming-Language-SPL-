#include<stdio.h>

void swapNumbers(int *number1, int *number2){
    int temp;
    temp=*number1;
    *number1=*number2;
    *number2=temp;

    printf("Value in function : %d %d\n",*number1,*number2);
}

int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    swapNumbers(&num1, &num2);

    printf("Value in main function : %d %d",num1,num2);
    return 0;
}
