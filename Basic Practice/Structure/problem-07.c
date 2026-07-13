#include<stdio.h>

struct complex{
    int real;
    int complex;
};
int main(void)
{
    struct complex number={5,8};
    struct complex *ptr= &number;
    printf("Real    part : %d\n",ptr->real); 
    printf("Complex part : %d\n",ptr->complex); 
    
return 0;    
}

