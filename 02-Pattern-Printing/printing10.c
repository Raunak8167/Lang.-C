#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            printf(" ");
        }
        int num = 1;
        char ch = 'a';
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if (j % 2 != 0)
            {
                printf("%d", num);
                num++;
            }
            else
            {
                printf("%c", ch);
                ch++;
            }

            if (j < (2 * i - 1))
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}