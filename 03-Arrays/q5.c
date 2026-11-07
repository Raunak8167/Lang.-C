/*If an array arr contains n elements, then
check if the given array is a palindrome or not.*/
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            printf("Array is not a palindrome\n");
            return 0;
        }
        else
        {
            continue;
        }
    }

    printf("Array is a palindrome\n");
    return 0;
}