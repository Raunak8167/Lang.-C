/*Find the unique number in a given Array where
all the elements are being repeated twice with one
value being unique.*/
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}