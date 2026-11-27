#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter rows and columns of a matrix: ");
    scanf("%d %d", &r, &c);

    if (r <= 0 || c <= 0)
    {
        printf("Invalid matrix dimensions.");
        return 1;
    }

    int arr[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int diagonal_sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                diagonal_sum += arr[i][j];
            }
        }
    }
    printf("Diagonal Sum: %d\n", diagonal_sum);
    return 0;
}