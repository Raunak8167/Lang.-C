// GCD AND LCM

#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

long long lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return (long long)(a / gcd(a, b)) * b;
}

int main()
{
    int a, b;

    printf("Enter two non-negative integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0)
    {
        printf("Please enter non-negative integers.\n");
        return 0;
    }

    if (a == 0 && b == 0)
    {
        printf("GCD is undefined for 0 and 0.\n");
        return 0;
    }

    printf("GCD = %d\n", gcd(a, b));
    printf("LCM = %lld\n", lcm(a, b));

    return 0;
}
