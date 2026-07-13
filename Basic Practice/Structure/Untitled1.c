#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};                      // must be end with semi-colen;
int main ()
{
    struct person person1,person2;  // local variable
    person1.age=27;
    person1.salary=20000.20;
    printf("Age    :%d\n",person1.age);
    printf("salary :%.2f\n",person1.salary);


    person2.age=30;
    person2.salary=250000.20;
    printf("Age    :%d\n",person2.age);
    printf("salary :%.2f\n",person2.salary);
    getch();
}
