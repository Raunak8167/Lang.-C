#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {

        // Print letters
        for (j = 0; j <= i; j++)
        {
            printf("%c", 'a' + i);
        }

        // Print numbers
        for (j = 5 - i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}