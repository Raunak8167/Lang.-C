// Calculate (a^b) without using pow(). By using function
#include <stdio.h>
long long power(int a, int b)
{
    long long result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
int main()
{
    int a, b, i;
    printf("Give a number : ");
    scanf("%d", &a);
    printf("Power of that number : ");
    scanf("%d", &b);
    if (b < 0)
    {
        printf("Exponent must be non-negative.\n");
        return 0;
    }
    long long ans = power(a, b);

    printf("Answer = %lld\n", ans);

    return 0;
}