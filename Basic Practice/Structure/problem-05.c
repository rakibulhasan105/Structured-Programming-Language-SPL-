#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int roll;
    double cgpa;
};

void displayInformation(struct student s1, int n);
void inputValue(struct student *s1, int n); // <-- pointer version

int main() {
    struct student students[5];

    for (int i = 0; i < 5; i++) {
        inputValue(&students[i], i); // <-- pass address
    }

    for (int i = 0; i < 5; i++) {
        displayInformation(students[i], i);
    }

    return 0;
}

void displayInformation(struct student s1, int n) {
    printf("Name of %d student is : %s\n",    n + 1, s1.name);
    printf("Roll of %d student is : %d\n",    n + 1, s1.roll);
    printf("Cgpa of %d student is : %.2lf\n", n + 1, s1.cgpa);
}

void inputValue(struct student *s1, int n) {
    printf("Enter the information about %dth student\n", n + 1);

    printf("Enter the name: ");
    fgets(s1->name, sizeof(s1->name), stdin);
    s1->name[strcspn(s1->name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter the roll: ");
    scanf("%d", &s1->roll);

    printf("Enter the cgpa: ");
    scanf("%lf", &s1->cgpa);
    getchar(); // Clear newline left in buffer
}