#include <stdio.h>

int main() {
    double basic_salary, hra, ta, da, gross_salary;
    int choice;

    printf("Enter the basic salary: ");
    scanf("%lf", &basic_salary);

    hra = 0.20 * basic_salary;
    ta = 0.10 * basic_salary;
    da = 0.05 * basic_salary;
    gross_salary = basic_salary + hra + ta + da;

    printf("Choose an option:\n");
    printf("1. Display HRA\n");
    printf("2. Display TA\n");
    printf("3. Display DA\n");
    printf("4. Display Gross Salary\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("HRA is: %.2lf", hra);
            break;
        case 2:
            printf("TA is: %.2lf", ta);
            break;
        case 3:
            printf("DA is: %.2lf", da);
            break;
        case 4:
            printf("Gross Salary is: %.2lf", gross_salary);
            break;
        default:
            printf("Invalid choice.");
    }
    return 0;
}