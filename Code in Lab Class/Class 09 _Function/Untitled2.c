#include<stdio.h>
void posNegZero(int number){
    if(number > 0){
        printf("The number is Positive");
    }
    else if(number<0){
        printf("The number is Negative");
    }
    else{
        printf("The number is Zero");
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    posNegZero(num);
    return 0;
}
