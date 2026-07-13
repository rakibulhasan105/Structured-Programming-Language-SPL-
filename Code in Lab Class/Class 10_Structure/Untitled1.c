#include<stdio.h>
struct Student
{
    char name[100];
    int id;
    float cgpa;
};
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
    printf("\nStudent's Information:\n");
    for (i = 0; i < size; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("CGPA: %.2f\n", students[i].cgpa);
        printf("\n");
    }
    return 0;
}
