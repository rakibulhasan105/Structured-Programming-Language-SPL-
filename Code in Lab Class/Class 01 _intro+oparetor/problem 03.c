#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter the first, second, and last number: ");
    scanf("%d %*d %d", &num1, &num2);
    printf("First value: %d & Last value: %d ",num1, num2);

    return 0;
}
