#include<stdio.h>
int main ()
{
    int x=5;
    int *ptr=&x;

    printf("value of x = %d\n",x);    // value of x
    printf("address of x = %d\n",&x); // address of x
    printf("%d\n",ptr);          // address of x which is assign in ptr
    printf("%d\n",*ptr);         // value of ptr's location
    printf("%d\n",&ptr+1);       // address of ptr variable
    //return 0;
getch();
}
