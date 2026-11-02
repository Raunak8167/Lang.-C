#include <stdio.h>
void increasing(int x, int n)
{
    if (x > n)
    {
        return;
    }
    printf("%d\n", x);
    increasing(x + 1, n);
}
void decreasing(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    decreasing(n - 1);
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    decreasing(a);
    increasing(1, a);
    return 0;
}