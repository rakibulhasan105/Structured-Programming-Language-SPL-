#include<stdio.h>
int main(){
    int number1, number2, sum;
    int *ptr1, *ptr2;
    printf("Enter the numbers \n");
    scanf("%d %d",&number1,&number2);

    ptr1=&number1, ptr2=&number2;

    sum= *ptr1+ *ptr2;
    printf("Sum is: %d",sum);

    return 0;
}