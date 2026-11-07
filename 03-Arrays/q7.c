/*Write a function to find a duplicate element from a given
array of integers.*/
#include <stdio.h>
int findDuplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int duplicate = findDuplicate(arr, n);
    if (duplicate != -1)
    {
        printf("Duplicate element found: %d\n", duplicate);
    }
    else
    {
        printf("No duplicate element found.\n");
    }
    return 0;
}