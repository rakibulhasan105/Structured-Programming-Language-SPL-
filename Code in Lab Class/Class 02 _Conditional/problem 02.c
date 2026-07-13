#include<stdio.h>
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number%2==0){
        printf("This is an EVEN number");
    }
    else{
        printf("This is an ODD number");
    }
    return 0;
}
