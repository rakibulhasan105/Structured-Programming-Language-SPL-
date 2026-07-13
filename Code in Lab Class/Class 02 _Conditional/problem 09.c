#include <stdio.h>
int main() {
    char department;
    float annualSalary, annualSales, totalBonus = 0;

    printf("Enter employee's annual salary: $");
    scanf("%f", &annualSalary);

    printf("Enter employee's department (S for sales, O for other): ");
    scanf(" %c", &department);

    if (annualSalary > 0) {
        totalBonus = 0.03 * annualSalary;

        if (department == 'S' || department == 's') {
            printf("Enter employee's annual sales: $");
            scanf("%f", &annualSales);

            if (annualSales > 100000) {
                totalBonus =totalBonus + 0.05 * annualSalary;
            }
        }

        printf("Total bonus for the employee: $%.2f\n", totalBonus);
    }
    else {
        printf("Invalid annual salary. Please enter a positive amount.\n");
    }

    return 0;
}

