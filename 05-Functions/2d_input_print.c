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

void printmatrix(int arr[][10], int rows, int cols)
{
    printf("\nThe Matrix is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[10][10];
    int rows, cols;

    printf("Enter number of rows and columns (max %d): ", 10);
    scanf("%d %d", &rows, &cols);

    print_input(arr, rows, cols);
    printmatrix(arr, rows, cols);

    return 0;
}
