//swapping with function
#include<stdio.h>
void pointer(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main ()
{
    int i=20,j=30;
    printf("Before swapping : i= %d   j= %d\n",i,j);

    pointer(&i,&j);

    printf("After swapping  : i= %d   j= %d\n",i,j);

    getch();
}
