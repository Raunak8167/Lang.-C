#include <stdio.h>
int main()
{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 6)
        {
            printf("*  +  *\n");
        }
        else if (i == 4)
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