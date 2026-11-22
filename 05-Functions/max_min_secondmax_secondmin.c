#include <stdio.h>
#include <limits.h>

int max(int arr[], int n)
{
    int i;
    int maximum = arr[0];

    for (i = 1; i < n; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
        }
    }

    return maximum;
}

int min(int arr[], int n)
{
    int i;
    int minimum = arr[0];

    for (i = 1; i < n; i++)
    {
        if (minimum > arr[i])
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

int second_max(int arr[], int n)
{
    int i;
    int second_maximum = INT_MIN;
    int maximum = max(arr, n);

    for (i = 0; i < n; i++)
    {
        if (arr[i] > second_maximum && arr[i] < maximum)
        {
            second_maximum = arr[i];
        }
    }

    return second_maximum;
}

int second_min(int arr[], int n)
{
    int i;
    int second_minimum = INT_MAX;
    int minimum = min(arr, n);

    for (i = 0; i < n; i++)
    {
        if (arr[i] < second_minimum && arr[i] > minimum)
        {
            second_minimum = arr[i];
        }
    }

    return second_minimum;
}

int main(void)
{
    int n, i;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Maximum: %d\n", max(arr, n));
    printf("Minimum: %d\n", min(arr, n));

    if (n > 1)
    {
        printf("Second maximum: %d\n", second_max(arr, n));
        printf("Second minimum: %d\n", second_min(arr, n));
    }

    return 0;
}
