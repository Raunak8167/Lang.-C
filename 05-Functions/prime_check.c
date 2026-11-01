#include <stdio.h>
int prime(int x)
{

    if (x <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (prime(n))
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a Prime Number");
    }
    return 0;
}