#include <stdio.h>
void increasing(int n, int x)
{
    if (x > n)
    {
        return;
    }
    printf("%d\n", x);
    increasing(n, x + 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increasing(n, 1);
    return 0;
}