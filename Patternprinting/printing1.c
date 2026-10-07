#include <stdio.h>
int main()
{
    int n = 7;
    printf("%d\n", n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 4)
        {
            printf("+++++++\n");
        }
        else
        {
            printf("***+***\n");
        }
    }
    return 0;
}