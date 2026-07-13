#include<stdio.h>
int main(){
    int number1, number2;
    int *ptr1, *ptr2;
    printf("Enter the numbers \n");
    scanf("%d %d",&number1,&number2);

    ptr1=&number1, ptr2=&number2;

    if(*ptr1>*ptr2){
        printf("Maximum number is: %d ",*ptr1);
    }
    else if(*ptr2>*ptr1){
        printf("Maximum number is: %d ",*ptr2);
    }
    else{
        printf("Both numbers are equal");
    }

    return 0;
}