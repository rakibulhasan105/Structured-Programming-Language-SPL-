// Numbers square
#include<stdio.h>
int  squar(int a);// function prototype
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    //int result=num*num; normal way
    squar(num);
    //printf("%d",squar(num));   call in print
    int x=  squar(num);
    printf("%d",x);

}
int squar(int a)  // function definition
{
    return a*a;
printf("%d",a*a);
}
