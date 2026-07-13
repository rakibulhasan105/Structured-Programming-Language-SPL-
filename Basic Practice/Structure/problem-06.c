#include<stdio.h>

struct vector {
    int x;
    int y;
};
void calcSum(struct vector v1,struct vector v2, struct vector sum);
int main()
{
    struct vector v1={10,5};
    struct vector v2={5,5};
    struct vector sum={0};
    calcSum(v1,v2,sum);

    return 0;
}
void calcSum(struct vector v1,struct vector v2, struct vector sum){

    sum.x=v1.x+v2.x;
    sum.y= v1.y+v2.y;
    printf("Sum of X = %d\n",sum.x);
    printf("Sum of Y = %d\n",sum.y);
}

