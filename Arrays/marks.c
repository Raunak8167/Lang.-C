#include <stdio.h>
int main()
{
    int marks[15] = {30, 43, 34, 56, 54, 45, 67, 77, 76, 31, 70, 41, 88, 20, 1};
    for (int i = 0; i < 15; i++)
    {
        if (marks[i] < 33)
        {
            printf("%d ", i);
        }
    }
    return 0;
}