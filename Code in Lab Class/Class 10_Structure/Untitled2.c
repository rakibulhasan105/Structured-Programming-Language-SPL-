#include<stdio.h>
struct Student{
    char name[100];
    int id;
    float cgpa;
};
int main(){
    int i, size;
    printf("How many students? ");
    scanf("%d",&size);
    struct Student students[size];
    for(i=0; i<size; i++){
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
float max_cgpa=students[0].cgpa;
    int max_index=0;

    for (i = 1; i < size; i++) {
        if(students[i].cgpa>max_cgpa){
            max_cgpa=students[i].cgpa;
            max_index=i;
        }
    }
printf("\nStudent with the highest CGPA:\n");
    printf("Name: %s\nID: %d\nCGPA: %.2f\n", students[max_index].name, students[max_index].id, students[max_index].cgpa);
    return 0;
}
