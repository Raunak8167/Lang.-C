#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("\n");

    // 1. Get user input
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element for row %d and column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // 2. Print original matrix
    printf("\nYour Matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 3. ACTUAL TRANSPOSE in memory
    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        // Start j from i to only swap the upper triangle
        for (j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}