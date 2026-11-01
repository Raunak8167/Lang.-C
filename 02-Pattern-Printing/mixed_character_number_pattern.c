#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 3; i++)
    {
        printf("***+%d%d%d\n", i, i, i);
    }

    printf("+++++++\n");

    for (i = 0; i < 3; i++)
    {
        printf("%c%c%c+%c%c%c\n",
               'a' + i, 'a' + i, 'a' + i,
               'Z' - i, 'Z' - i, 'Z' - i);
    }

    return 0;
}