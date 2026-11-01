// Print all primes in a given range using a function.

#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void printPrimes(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    int start, end;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    if (start > end)
    {
        printf("Invalid range.\n");
        return 0;
    }

    printf("Prime numbers are: ");
    printPrimes(start, end);

    return 0;
}
