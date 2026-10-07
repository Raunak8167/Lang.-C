#include <stdio.h>

int main()
{
    int choice;
    double num1, num2, result;

    do
    {

        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Select an operation (1-5): ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice! Please select a valid option from the menu.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("Sum: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("Subtraction: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("Multiply: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("Division: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            break;
        }

    } while (1);
    return 0;
}
