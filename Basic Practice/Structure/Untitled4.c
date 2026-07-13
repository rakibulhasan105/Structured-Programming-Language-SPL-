#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};
int main ()
{
    struct person person1= {20,3000.30};    // direct initialization 
    struct person person2,person3;
    //elements wise assignment
    person2.age=30;
    person2.salary=23000.50;
    //structure variable assignment
    person3=person2;

    printf("\nperson1:\nAge    :%d\n",person1.age);
    printf("salary :%.2f\n",person1.salary);

    printf("\nPerson2:\nAge    :%d\n",person2.age);
    printf("salary :%.2f\n",person2.salary);

    printf("\nPerson3:\nAge    :%d\n",person3.age);
    printf("salary :%.2f\n",person3.salary);

    //getch();
    return 0;
}
