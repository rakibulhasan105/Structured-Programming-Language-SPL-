#include<stdio.h>
int main(){
    int x, y, *ptr1, *ptr2, temp;
    printf("Enter the value of number1 and number2 \n");
    scanf("%d %d",&x,&y);
    ptr1=&x, ptr2=&y;
    printf("Before swapping: x= %d y=%d\n",x,y);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("After swapping: x= %d y=%d",x,y);
    return 0;
}