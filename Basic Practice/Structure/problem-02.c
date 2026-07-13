#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    double cgpa;
};

int main()
{
    struct student student_1;
    struct student student_2= {"Maisha",120,3.56}; // diract initialization 

    // student_1.name="Rakibul Hasan";  // not work;
    strcpy(student_1.name, "Rakibul Hasan");
    student_1.roll = 105;
    student_1.cgpa = 2.5;

    printf("Name : %s\n", student_1.name);
    printf("Roll : %d\n", student_1.roll);
    printf("Cgpa : %.2lf\n", student_1.cgpa);

    printf("Name : %s\n", student_2.name);
    printf("Roll : %d\n", student_2.roll);
    printf("Cgpa : %.2lf\n", student_2.cgpa);
}
