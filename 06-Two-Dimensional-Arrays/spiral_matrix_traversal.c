
#include <stdio.h>

void spiral(int n, int m, int arr[n][m])
{
    int i;
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    while (top <= bottom && left <= right)
    {
        // 1. Traverse the top row (left to right)
        for (i = left; i <= right; i++)
        {
            printf("%d ", arr[top][i]);
        }
        top++;

        // 2. Traverse the right column (top to bottom)
        for (i = top; i <= bottom; i++)
        {
            printf("%d ", arr[i][right]);
        }
        right--;

        // 3. Traverse the bottom row (right to left)
        if (top <= bottom)
        {
            for (i = right; i >= left; i--)
            {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

        // 4. Traverse the left column (bottom to top)
        if (left <= right)
        {
            for (i = bottom; i >= top; i--)
            {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
}

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

    printf("Spiral order of the matrix is: ");
    spiral(r, c, arr);

    return 0;
}
