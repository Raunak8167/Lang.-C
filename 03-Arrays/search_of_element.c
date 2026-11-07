#include <stdio.h>

int main()
{
    int n, i, x;
    int found = 0; // Flag to track if the element is found

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 1. Ask the user for the element to search for
    printf("Enter the element to search for : ");
    scanf("%d", &x);

    // 2. Search loop
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("Element %d found at index : %d\n", x, i);
            found = 1; // Mark as found
            break;     // Stop searching since we found it
        }
    }

    // 3. Check if the element was never found after looking through the whole array
    if (!found)
    {
        printf("Element %d not found in the array\n", x);
    }

    return 0;
}
