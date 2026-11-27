#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j, k;

    // 1. Get dimensions for both matrices
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // 2. Validate dimensions
    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
    {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    // Multiplication rule: columns of 1st must equal rows of 2nd
    if (c1 != r2)
    {
        printf("Cannot multiply matrices: columns of first must equal rows of second.\n");
        return 1;
    }

    int arr1[r1][c1], arr2[r2][c2], product[r1][c2];

    // 3. Input elements for first matrix
    printf("\nEnter elements for first matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    // 4. Input elements for second matrix
    printf("\nEnter elements for second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    // 5. Multiply matrices
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            product[i][j] = 0; // Initialize cell to 0
            for (k = 0; k < c1; k++)
            {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // 6. Display result
    printf("\nProduct of the matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
