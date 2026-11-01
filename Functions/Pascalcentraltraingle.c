#include <stdio.h>
#include <math.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main()
{
    int n, i, j;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < (n - i - 1); j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d ", icj);
        }
        printf("\n");
    }
    return 0;
}
