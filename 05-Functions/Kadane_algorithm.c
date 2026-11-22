#include <stdio.h>
#include <stdlib.h>

int maxSubarraySum(int arr[], int n, int *final_current_sum)
{
    int i;
    int max_sum = arr[0];
    int current_sum = arr[0];

    for (i = 1; i < n; i++)
    {
        if (current_sum + arr[i] > arr[i])
        {
            current_sum = current_sum + arr[i];
        }
        else
        {
            current_sum = arr[i];
        }

        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
    }

    // Store the final current_sum at the pointer address
    *final_current_sum = current_sum;
    return max_sum;
}

int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int final_current_sum;
    int result = maxSubarraySum(arr, n, &final_current_sum);

    printf("Maximum Subarray Sum: %d\n", result);
    printf("Final Current Sum: %d\n", final_current_sum);

    return 0;
}
