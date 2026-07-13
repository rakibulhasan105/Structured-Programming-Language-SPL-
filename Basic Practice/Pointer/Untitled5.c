//swapping
#include<stdio.h>
int main ()
{
    int x=10,y=20,temp;
    int *ptr1,*ptr2;  // pointer declaration

    ptr1=&x;  // assignment
    ptr2=&y;

    temp=*ptr1;
    *ptr1=*ptr2;    // swap
    *ptr2=temp;

    printf("x=%d\ny=%d\n",x,y);
//getch();
return 0;
}


