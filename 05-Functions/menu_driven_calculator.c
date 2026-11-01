// Menu driven Calculator.

#include <stdio.h>
#include <math.h>

long long add(long long a, long long b)
{
    return a + b;
}

long long subtract(long long a, long long b)
{
    return a - b;
}

long long multiply(long long a, long long b)
{
    return a * b;
}

long long divide(long long a, long long b)
{
    return a / b;
}

long long power(long long a, long long b)
{
    return (long long)pow(a, b);
}

long long nth_root(long long a, long long b)
{
    return (long long)pow(a, 1.0 / b);
}

int main()
{
    int choice, n, i;
    char again;
    long long number, result, base, exponent, degree;
    int valid;

    do
    {
        printf("\n--- MENU-DRIVEN CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (a^b)\n");
        printf("6. Nth Root\n");

        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
            return 1;

        valid = 1;

        if (choice < 1 || choice > 6)
        {
            printf("Invalid choice!\n");
            valid = 0;
        }
        else if (choice == 5 || choice == 6)
        {
            printf("Enter the base/radicand: ");
            scanf("%lld", &base);

            if (choice == 5)
            {
                printf("Enter the exponent: ");
                scanf("%lld", &exponent);

                if (base == 0 && exponent < 0)
                {
                    printf("Error: Zero cannot have a negative exponent.\n");
                    valid = 0;
                }
                else
                {
                    result = power(base, exponent);
                }
            }
            else
            {
                printf("Enter the root degree: ");
                scanf("%lld", &degree);

                if (degree == 0)
                {
                    printf("Error: Root degree cannot be zero.\n");
                    valid = 0;
                }
                else if (base < 0)
                {
                    printf("Error: This version supports real roots of non-negative numbers only.\n");
                    valid = 0;
                }
                else
                {
                    result = nth_root(base, degree);
                }
            }
        }
        else
        {
            printf("How many numbers do you want to use? ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("Enter a positive number of inputs.\n");
                valid = 0;
            }
            else
            {
                printf("Enter number 1: ");
                scanf("%lld", &result);

                for (i = 2; i <= n; i++)
                {
                    printf("Enter number %d: ", i);
                    scanf("%lld", &number);

                    switch (choice)
                    {
                    case 1:
                        result = add(result, number);
                        break;

                    case 2:
                        result = subtract(result, number);
                        break;

                    case 3:
                        result = multiply(result, number);
                        break;

                    case 4:
                        if (number == 0)
                        {
                            printf("Error: Division by zero!\n");
                            valid = 0;
                        }
                        else
                        {
                            result = divide(result, number);
                        }
                        break;
                    }

                    if (valid == 0)
                        break;
                }
            }
        }

        if (valid == 1)
        {
            printf("Result = %lld\n", result);
        }

        printf("\nDo you want another calculation? (y/n): ");
        if (scanf(" %c", &again) != 1)
            break;

    } while (again == 'y' || again == 'Y');

    printf("Calculator closed.\n");

    return 0;
}