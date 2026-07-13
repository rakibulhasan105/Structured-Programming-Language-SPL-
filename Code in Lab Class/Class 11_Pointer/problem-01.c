#include<stdio.h>
int main(){
    int  x= 7;
    int *p;
    p = &x;
    printf("Value of x %d\n", x);
    printf("Address of x %d\n", &x);
    printf("Value of p %d\n", p);
    printf("Address of p %d\n", &p);
    printf("Content of variable p pointing to %d\n", *p);
    return 0;
}
