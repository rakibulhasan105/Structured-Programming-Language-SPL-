#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_EMPLOYEES 100

typedef struct
{
    int id;
    char name[50];
    char position[50];
    int salary;
} Employee;

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee()
{
    if (employeeCount < MAX_EMPLOYEES)
    {
        Employee newEmployee;
        printf("Give employee information:\n");
        printf("Enter employee ID: ");
        scanf("%d", &newEmployee.id);
        getchar();

        printf("Enter employee name: ");
        fgets(newEmployee.name, sizeof(newEmployee.name), stdin);
        newEmployee.name[strcspn(newEmployee.name, "\n")] = 0;

        printf("Enter employee position: ");
        fgets(newEmployee.position, sizeof(newEmployee.position), stdin);
        newEmployee.position[strcspn(newEmployee.position, "\n")] = 0;

        printf("Enter employee salary: ");
        scanf("%d", &newEmployee.salary);
        employees[employeeCount++] = newEmployee;
        printf("Employee added successfully.\n");
    }
    else
    {
        printf("Employee list is full.\n");
    }
}

void updateEmployee()
{
    int id, found = 0;
    printf("Enter employee ID for information update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < employeeCount; i++)
    {
        if (employees[i].id == id)
        {
            found = 1;

            printf("Enter new name (leave blank to skip): ");
            char name[50];
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = 0;

            if (strlen(name) > 0)
            {
                strcpy(employees[i].name, name);
            }

            printf("Enter new position (leave blank to skip): ");
            char position[50];
            fgets(position, sizeof(position), stdin);
            position[strcspn(position, "\n")] = 0;

            if (strlen(position) > 0)
            {
                strcpy(employees[i].position, position);
            }

            printf("Enter new salary (leave blank to skip): ");
            char salaryInput[20];
            fgets(salaryInput, sizeof(salaryInput), stdin);
            if (strlen(salaryInput) > 0)
            {
                int salary = atoi(salaryInput);
                if (salary > 0)
                {
                    employees[i].salary = salary;
                }
            }

            printf("Employee information updated successfully.\n\n");
            printf("Id: %d, Name: %s, Position: %s, Salary: %d\n",
                   employees[i].id, employees[i].name, employees[i].position, employees[i].salary);
            break;
        }
    }
    if (!found)
    {
        printf("Employee with ID %d not found.\n", id);
    }
}

void deleteEmployee()
{
    int id, found = 0;
    printf("Enter employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < employeeCount; i++)
    {
        if (employees[i].id == id)
        {
            found = 1;
            for (int j = i; j < employeeCount - 1; j++)
            {
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            printf("Employee with ID %d has been deleted.\n", id);
            break;
        }
    }
    if (!found)
    {
        printf("Employee with ID %d not found.\n", id);
    }
}

void viewEmployee()
{
    int id, found = 0;
    printf("Enter employee ID: ");
    scanf("%d", &id);

    for (int i = 0; i < employeeCount; i++)
    {
        if (employees[i].id == id)
        {
            found = 1;
            printf("Employee Information:\n");
            printf("Name: %s\n", employees[i].name);
            printf("Position: %s\n", employees[i].position);
            printf("Salary: %d\n", employees[i].salary);
            break;
        }
    }
    if (!found)
    {
        printf("Employee with ID %d not found.\n", id);
    }
}

int main()
{
    int choice;
    printf("\nPress 1 to Add New Employee\n");
    printf("Press 2 to Update Employee Information\n");
    printf("Press 3 to Delete Employee\n");
    printf("Press 4 to View Employee Information\n");
    printf("Press 5 to Exit Program\n");

    while (1)
    {
        printf("\n\nPlease enter your choice: ");
        scanf("%d", &choice);
        printf("\n");
        getchar();

        switch (choice)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            updateEmployee();
            break;
        case 3:
            deleteEmployee();
            break;
        case 4:
            viewEmployee();
            break;
        case 5:
            printf("Exiting program...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
