// fibonacci

#include <stdio.h>

void fibonacci(int n)
{
    long long first = 0;
    long long second = 1;
    long long next;

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 0;
    }

    fibonacci(n);

    return 0;
}
