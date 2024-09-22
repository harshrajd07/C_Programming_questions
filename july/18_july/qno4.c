#include <stdio.h>

int main() {
    char employeeType;
    float basicSalary, increasedSalary;
    printf("Enter employee type ('M' for manager, 'H' for HR employee): ");
    scanf(" %c", &employeeType);
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basicSalary);
    increasedSalary = (employeeType == 'M') ? (basicSalary * 1.05) : basicSalary;
    printf("The increased salary is: %.2f\n", increasedSalary);

    return 0;
}

