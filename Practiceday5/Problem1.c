#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression: ");
    scanf("%f%c%f", &a, &op, &b);

    if (op == '+')
    {
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    }
    else if (op == '-')
    {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }
    else if (op == '*')
    {
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        }
        else
        {
            printf("Division by zero is not possible\n");
        }
    }
    else
    {
        printf("Entered operator is incorrect\n");
    }

    return 0;
}