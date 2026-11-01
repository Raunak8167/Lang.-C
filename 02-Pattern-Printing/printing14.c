#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int spaces = 1; spaces <= n - j; spaces++)
        {
            printf(" ");
        }
        for (int k = j; k >= 1; k--)
        {
            printf("%d", k);
        }
        for (int i = 2; i <= j; i++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}