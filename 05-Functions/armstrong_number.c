// Armstrong Number

#include <stdio.h>

long long power(int base, int exponent)
{
    long long result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}

int isArmstrong(int n)
{
    if (n < 0)
    {
        return 0;
    }

    int temp = n;
    int digits = 0;
    long long sum = 0;

    // Count the digits
    do
    {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    // Restore the original number
    temp = n;

    // Calculate the sum of digit powers
    do
    {
        int digit = temp % 10;
        sum = sum + power(digit, digits);
        temp = temp / 10;
    } while (temp > 0);

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
