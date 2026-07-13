#include<stdio.h>
int main ()
{
    int i=20,j=30;
    printf("Befor Pointer value  : \ni= %d\nj= %d\n",i,j);
    printf("Befor Pointer address: \ni= %d\nj= %d\n",&i,&j);
    //pointer(&i,&j);
    int *p,*q;
    p=&i;
    q=&j;

    printf("After Pointer: \ni= %d\nj= %d\n",*p,*q);
    printf("After Pointer: \ni= %d\nj= %d\n",p,q);
    printf("After Pointer: \ni= %d\nj= %d\n",&p,&q);
    return 0;
}
