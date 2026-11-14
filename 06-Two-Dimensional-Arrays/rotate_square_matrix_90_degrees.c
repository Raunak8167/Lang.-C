/*Write a program to find the transpose of a matrix and rotate it 90 degrees clockwise and anticlockwise.*/
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the size of the square matrix: ");

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    int arr[n][n];
    int original[n][n];

    // 1. Input matrix
    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element for row %d and column %d: ",
                   i, j);

            scanf("%d", &original[i][j]);

            arr[i][j] = original[i][j];
        }
    }

    // 2. Print original matrix
    printf("\nOriginal Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 3. Transpose the matrix
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // 4. Print transpose
    printf("\nTranspose of the Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 5. Reverse each row (90-degree clockwise)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = temp;
        }
    }

    // 6. Print clockwise rotation
    printf("\n90-degree Clockwise Rotation:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 7. Restore original matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = original[i][j];
        }
    }

    // 8. Transpose again
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // 9. Reverse each column (90-degree anticlockwise)
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n / 2; i++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[n - 1 - i][j];
            arr[n - 1 - i][j] = temp;
        }
    }

    // 10. Print anticlockwise rotation
    printf("\n90-degree Anticlockwise Rotation:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}