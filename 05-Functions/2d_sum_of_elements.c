#include <stdio.h>

void print_input(int arr[][10], int a, int b)
{
    printf("Enter elements of the %dx%d matrix:\n", a, b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int sum(int arr[][10], int rows, int cols)
{
    int total = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            total += arr[i][j];
        }
    }
    return total;
}

void row_sum(int arr[][10], int rows, int cols)
{
    printf("\n--- Row Sums ---\n");
    for (int i = 0; i < rows; i++)
    {
        int row_total = 0;
        for (int j = 0; j < cols; j++)
        {
            row_total += arr[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, row_total);
    }
}

void cols_sum(int arr[][10], int rows, int cols)
{
    printf("\n--- Column Sums ---\n");
    for (int j = 0; j < cols; j++)
    {
        int cols_total = 0;
        for (int i = 0; i < rows; i++)
        {
            cols_total += arr[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, cols_total);
    }
}

int main()
{
    int arr[10][10];
    int rows, cols;

    printf("Enter number of rows and columns (max 10): ");
    scanf("%d %d", &rows, &cols);

    print_input(arr, rows, cols);

    int result = sum(arr, rows, cols);
    printf("\nSum of all elements = %d\n", result);

    row_sum(arr, rows, cols);
    cols_sum(arr, rows, cols);

    return 0;
}
