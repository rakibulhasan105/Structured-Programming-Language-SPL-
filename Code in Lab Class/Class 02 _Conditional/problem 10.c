#include<stdio.h>
int main(){
    int num,num1, num2;
    printf("Enter both number: ");
    scanf("%d %d",&num1, &num2);
    num=(num1>num2?num1:num2);
    printf("%d is the larger number",num);
    return 0;
}
