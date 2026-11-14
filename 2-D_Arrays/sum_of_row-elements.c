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
    int max_sum = arr[0][0];
    int min_sum = arr[0][0];
    int max_row_sum = 0;
    int min_row_sum = 0;
    for (i = 0; i < r; i++)
    {
        int current_row_sum = 0;

        for (j = 0; j < c; j++)
        {
            current_row_sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i, current_row_sum);
        if (i == 0)
        {
            max_sum = current_row_sum;
            min_sum = current_row_sum;
        }

        if (current_row_sum > max_sum)
        {
            max_sum = current_row_sum;
            max_row_sum = i;
        }
        if (current_row_sum < min_sum)
        {
            min_sum = current_row_sum;
            min_row_sum = i;
        }
    }
    printf("Maximum sum of %d row: %d\n", max_row_sum, max_sum);
    printf("Minimum sum of %d row: %d\n", min_row_sum, min_sum);
    return 0;
}
