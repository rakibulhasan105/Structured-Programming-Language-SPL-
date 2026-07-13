#include <stdio.h>
// global structure
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1, person2; // local variable

    printf("Enter information for person1\n");
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter salary: ");
    scanf("%f", &person1.salary);
    printf("\nperson1:\nAge    :%d\n", person1.age);
    printf("salary :%.2f\n", person1.salary);

    printf("\n\nEnter information for person2\n");
    printf("Enter age: ");
    scanf("%d", &person2.age);
    printf("Enter salary: ");
    scanf("%f", &person2.salary);
    printf("\nPerson2:\nAge    :%d\n", person2.age);
    printf("salary :%.2f\n", person2.salary);
    getch();
}
