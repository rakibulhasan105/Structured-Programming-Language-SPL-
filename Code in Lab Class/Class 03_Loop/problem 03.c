#include<stdio.h>
int main(){
    int N,i;
    float num, sum=0, avg;
    printf("How many number?  ");
    scanf("%d",&N);
    for(i=1;i<=N; i++){
        printf("Enter the number: ");
        scanf("%f",&num);
        sum+=num;   //sum=sum+num
    }
    avg=sum/N;
    printf("The average: %0.2f",avg);
    return 0;
}
