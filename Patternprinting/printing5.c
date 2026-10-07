#include <stdio.h>

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i == 1)
                printf("*");

            else if (i == 2)
            {
                if (j <= 3 || j >= 8)
                    printf("*");
                else
                    printf(" ");
            }

            else if (i == 3)
            {
                if (j == 1 || j == 10)
                    printf("*");
                else
                    printf(" ");
            }

            else if (i == 4)
            {
                if (j == 1)
                    printf("5");
                else if (j == 10)
                    printf("1");
                else
                    printf(" ");
            }

            else if (i == 5)
            {
                if (j <= 3)
                    printf("4");
                else if (j >= 8)
                    printf("2");
                else
                    printf(" ");
            }

            else if (i == 6)
            {
                printf("3");
            }
        }

        printf("\n");
    }

    return 0;
}