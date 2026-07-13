#include<stdio.h>
int main(){
    int num, i, j, val;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        for(j=1;j<=num;j++){
            printf((i + j) % 2 == 1 ? " 0" : " 1");
        }
        printf("\n");
    }
    return 0;

}

