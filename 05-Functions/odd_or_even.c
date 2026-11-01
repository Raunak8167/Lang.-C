#include <stdio.h>
int number(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (number(n))
        printf("Even\n");
    else
        printf("Odd\n");
}