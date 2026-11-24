#include <stdio.h>

int main()
{
    int n1, n2, i, j;

    printf("Enter size of square matrix1 (n): ");
    scanf("%d", &n1);
    printf("Enter size of square matrix2 (n): ");
    scanf("%d", &n2);

    // Check if addition is possible
    if (n1 != n2)
    {
        printf("Matrix addition not possible! Sizes must be equal.\n");
        return 1;
    }

    int matrix1[n1][n1];
    int matrix2[n2][n2];
    int sum[n1][n1]; // Result matrix to store the sum

    // Input Matrix 1
    printf("\n--- Enter Matrix 1 ---\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("Enter the element for row %d and column %d: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input Matrix 2
    printf("\n--- Enter Matrix 2 ---\n");
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("Enter the element for row %d and column %d: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add Matrix 1 and Matrix 2
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the Sum Matrix
    printf("\n--- Sum of Matrices ---\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
