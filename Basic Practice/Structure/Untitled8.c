//function structure  diclraration
#include<stdio.h>
#include<string.h>
struct person//global structure
{
    char name[50];
    int age;
    float salary;
};
void display(struct person man)
{
    printf("Name   :%s\n",man.name);
    printf("Age    :%d\n",man.age);
    printf("salary :%f\n\n",man.salary);

}
int main ()
{
    struct person person1,person2;  // local variable
    strcpy(person1.name,"Rakibul Hasan");
    person1.age=19;
    person1.salary=500.50;
      display(person1);

      strcpy(person2.name,"Maisha masud");
    person2.age=19;
    person2.salary=10000.50;
      display(person2);
return 0;
}