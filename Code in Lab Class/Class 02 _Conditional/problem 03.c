#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num>0){
        printf("This is a positive number");
    }
    else if(num<0){
        printf("This is a negative number");
    }
    else{
        printf("This is zero");
    }
    return 0;
}
