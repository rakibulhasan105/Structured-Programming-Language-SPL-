#include<stdio.h>
void triarea(a,b);  //function prototype
int main ()
{
    int hight,base;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the hight: ");
    scanf("%d",&hight);
    triarea(base,hight);

    //int  area = triarea(base,hight);
    //printf("%d",area);

}

    void triarea(int a,int b)   // function definition
   {
       int x=0.5*a*b;
       printf("%fd",x);
       //return 0.5*a*b;
   }
