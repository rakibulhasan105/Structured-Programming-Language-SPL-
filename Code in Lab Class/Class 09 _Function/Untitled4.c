#include<stdio.h>
int sum(){
    int num, sum=0, i, number;
    printf("How many number you want to sum: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        printf("Enter number %d : ",i);
        scanf("%d",&number);
        sum=sum+number;
    }
    return sum;
}
int main(){
    int s;
    s=sum();
    printf("Sum is: %d",s);
    return 0;
}
