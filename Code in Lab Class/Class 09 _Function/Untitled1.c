#include<stdio.h>
void evenOdd(int number){
    if(number % 2 == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    evenOdd(num);
    return 0;
}
