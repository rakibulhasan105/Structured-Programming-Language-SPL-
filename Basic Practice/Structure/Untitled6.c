//structure array
#include<stdio.h>
struct person//global structure
{
    int age;
    float salary;
};                 
int main ()
{
    struct person person[3];  // local variable
    int i=0;
    for(i=0; i<3; i++)
    {
        printf("Enter information for person %d\n",i+1);
            printf("Enter age: ");
        scanf("%d",&person[i].age);
            printf("Enter salary: ");
        scanf("%f",&person[i].salary);
            printf("\n");

    }
    for(i=0; i<3; i++)
    {
        printf("\nperson%d:\nAge    :%d\n",i+1,person[i].age);
        printf("salary :%.2f\n",person[i].salary);

    }
    return 0;
}


