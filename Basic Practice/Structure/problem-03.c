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
    
    struct student student_1= {"Maisha",120,3.56};
    printf("print with manual : \n");
    printf("Name : %s\n", student_1.name);
    printf("roll : %d\n", student_1.roll);
    printf("cgpa : %.2lf\n", student_1.cgpa);

    struct student *ptr;
    ptr=&student_1;
    printf("printf with pointer: \n");
    printf("Name : %s\n", (*ptr).name);
    printf("roll : %d\n",  (*ptr).roll);

    // useing arrow operator 
    printf("cgpa : %.2lf\n",  ptr -> cgpa);  // arrow opatator
}
