#include<stdio.h>
int main(){
    int N,i;
    printf("What is the length  of the series? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(i%2!=0){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
}
