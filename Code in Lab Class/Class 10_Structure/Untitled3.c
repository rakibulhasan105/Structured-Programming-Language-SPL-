#include<stdio.h>
struct Student
{
    char name[100];
    int id;
    float cgpa;
};
struct Student highCGPAStudent(struct Student students[], int size)
{
    struct Student high_cgpa_student=students[0];
    for(int i=1; i<size; i++)
    {
        if(students[i].cgpa>high_cgpa_student.cgpa)
        {
            high_cgpa_student=students[i];
        }
    }
    return high_cgpa_student;
}
int main()
{
    int i, size;
    printf("How many students? ");
    scanf("%d",&size);
    struct Student students[size];
    for(i=0; i<size; i++)
    {
        printf("Enter details for student %d: \n",i+1);
        printf("Name: ");
        //scanf(" %[^\n]",students[i].name);
        fflush(stdin);
        gets(students[i].name);
        printf("ID: ");
        scanf("%d",&students[i].id);
        printf("CGPA: ");
        scanf("%f",&students[i].cgpa);
    }
    struct Student high_cgpa_student = highCGPAStudent(students,size);
    printf("Highest CGPA student\n");
    printf("Name: %s\nID: %d\nCGPA: %.2f\n",high_cgpa_student.name,high_cgpa_student.id,high_cgpa_student.cgpa);
    return 0;
}
