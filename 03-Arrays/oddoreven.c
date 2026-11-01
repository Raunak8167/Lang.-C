#include <stdio.h>
int main()
{
    long long n;
    printf("Enter no. of elements : ");
    scanf("%lld", &n);
    long long arr[n];
    arr[0] = 0;
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long even = 0;
    long long odd = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%lld is even\n", arr[i]);
            even++;
        }
        else
        {
            printf("%lld is odd\n", arr[i]);
            odd++;
        }
    }
    printf("Number of even numbers: %lld\n", even);
    printf("Number of odd numbers: %lld\n", odd);
    return 0;
}