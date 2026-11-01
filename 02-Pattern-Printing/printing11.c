#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of columns: ");
    scanf("%d", &n);

    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 ||
                j <= (n + 1) / 2 - i + 1 ||
                j >= n - ((n + 1) / 2 - i + 1) + 1)
            {
                printf("%d ", j);
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
