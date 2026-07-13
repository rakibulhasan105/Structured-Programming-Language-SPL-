// type det method
#include <stdio.h>
#include <string.h>

typedef struct ComputerEngineearingStudent
{
    char name[50];
    int roll;
    double cgpa;
}ceo;

int main()
{
                                                // not use any struct variable 
    ceo student_1={"Rakibul Hasan",105,2.93};

    printf("Name : %s\n", student_1.name);
    printf("roll : %d\n", student_1.roll);
    printf("cgpa : %.2lf\n", student_1.cgpa);
}
