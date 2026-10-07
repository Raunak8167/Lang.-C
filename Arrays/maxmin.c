#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0;
    printf("Enter the elements of the array :\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    int second_max = arr[0];
    int second_min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > second_max && arr[i] < max)
        {
            second_max = arr[i];
        }
        else if (arr[i] < second_min && arr[i] > min)
        {
            second_min = arr[i];
        }
        }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    printf("Second maximum element: %d\n", second_max);
    printf("Second minimum element: %d\n", second_min);
    return 0;
}