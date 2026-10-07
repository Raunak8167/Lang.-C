#include <stdio.h>

int main() {

    char gender;
    char qualification;
    int years_of_service;
    int salary;

    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter Years of Service: ");
    scanf("%d", &years_of_service);

    printf("Enter Qualification (P for Post-Graduate, G for Graduate): ");
    scanf(" %c", &qualification);

    if (gender == 'M' || gender == 'm') {

        if (years_of_service >= 10) {

            if (qualification == 'P' || qualification == 'p') {
                salary = 15000;
            }
            else {
                salary = 10000;
            }

        }
        else {

            if (qualification == 'P' || qualification == 'p') {
                salary = 10000;
            }
            else {
                salary = 7000;
            }
        }

    }
    else if (gender == 'F' || gender == 'f') {

        if (years_of_service >= 10) {

            if (qualification == 'P' || qualification == 'p') {
                salary = 12000;
            }
            else {
                salary = 9000;
            }

        }
        else {

            if (qualification == 'P' || qualification == 'p') {
                salary = 10000;
            }
            else {
                salary = 6000;
            }
        }

    }

    printf("Employee Salary = Rs. %d\n", salary);

    return 0;
}