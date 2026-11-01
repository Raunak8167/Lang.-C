#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        // decreasing part
        for (int j = 9; j >= 10 - i; j--)
        {
            printf("%d", j);
        }

        // increasing part
        for (int j = 0; j < 10 - i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}