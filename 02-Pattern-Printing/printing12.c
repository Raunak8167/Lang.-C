#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 ||
                j <= (n + 1) / 2 - i + 1 ||
                j >= n - ((n + 1) / 2 - i + 1) + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    for (int i = (n + 1) / 2; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 ||
                j <= (n + 1) / 2 - i + 1 ||
                j >= n - ((n + 1) / 2 - i + 1) + 1)
            {
                printf("%c ", 'A' + ((n + 1) / 2 - i));
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    return 0;
}