#include <stdio.h>

int main()
{
    int n, searchKey, found = 0;

    // 1. Input size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Array must have at least 3 elements to have left and right neighbors.\n");
        return 0;
    }

    int arr[n], revised[n];

    // 2. Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        revised[i] = arr[i]; // Copy original to revised array
    }

    // 3. Input number to search
    printf("Enter the number to search and replace: ");
    scanf("%d", &searchKey);

    // 4. Search and replace with the mean of adjacent numbers
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchKey)
        {
            found = 1;
            // Check if it has both left (i-1) and right (i+1) neighbors
            if (i > 0 && i < n - 1)
            {
                int mean = (arr[i - 1] + arr[i + 1]) / 2;
                revised[i] = mean;
            }
            else
            {
                printf("Note: Element found at index %d is a boundary element and has no two adjacent neighbors.\n", i);
            }
        }
    }

    if (!found)
    {
        printf("Number %d not found in the array.\n", searchKey);
    }

    // 5. Print Original Array
    printf("\nOriginal Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 6. Print Revised Array
    printf("\nRevised Array:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", revised[i]);
    }
    printf("\n");

    return 0;
}
