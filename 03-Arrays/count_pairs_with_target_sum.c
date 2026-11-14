/*Find the total number of pairs in the Array
whose sum is equal to the given value x.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, x; // Added 'x' for the target sum
    int count = 0;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    int *arr = malloc((size_t)n * sizeof *arr);
    if (arr == NULL)
    {
        return 1;
    }

    printf("Enter elements in array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prompt for the target sum value x
    printf("Enter the target sum (x): ");
    scanf("%d", &x);

    // Fixed the inner loop increment and the if-condition
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++) // FIXED: Changed i++ to j++
        {
            if (arr[i] + arr[j] == x) // FIXED: Check current pair against x
            {
                count++;
                printf("Found Pair : (%d,%d)\n", arr[i], arr[j]);
            }
        }
    }

    printf("Total number of pairs = %d\n", count);
    free(arr);
    return 0;
}
