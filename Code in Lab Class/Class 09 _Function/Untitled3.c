#include<stdio.h>
void compareNumber(int number1, int number2){
    if(number1>number2){
        printf("%d is greater than %d ",number1,number2);
    }
    else if(number2>number1){
        printf("%d is less than %d ",number1,number2);
    }
    else{
        printf("%d is equal to %d ",number1,number2);
    }
}
int main(){
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    compareNumber(num1, num2);
    return 0;
}
