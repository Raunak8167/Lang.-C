#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            printf("Enter the element for row %d and column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nYour Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the matrix is :\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
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