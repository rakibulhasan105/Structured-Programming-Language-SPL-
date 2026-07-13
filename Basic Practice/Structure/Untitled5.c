#include<stdio.h>
//global structure
struct person
{
    int age;
    float salary;
};
int main ()
{
    struct person person1= {20,3000.30};    // diract assignment 
    struct person person2,person3;
    //elements wise assignment
    person2.age=30;
    person2.salary=23000.50;
    //structure variable assignment
    person3=person2;

    if(person3.age==person2.age && person3.salary== person2.salary)
    {
        printf("Person1 is equal person2");
    }
    else printf("not equal");

    //getch();
    return 0;
}