#include<stdio.h>
int main(){
    int num,i,j, value;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        value=i;
        for(j=1;j<=i;j++){
            printf("%d ",value);
            value++;
        }
        printf("\n");
    }
}

