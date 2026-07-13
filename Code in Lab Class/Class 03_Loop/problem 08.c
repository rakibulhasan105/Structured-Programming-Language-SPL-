#include<stdio.h>
int main(){
    int num, power, result=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&power);
    while(power>0){
        result=result*num;
        power--;
    }
    printf("The result is: %d", result);

}
