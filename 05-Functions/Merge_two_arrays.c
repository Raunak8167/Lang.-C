#include <stdio.h>
#include <stdlib.h>

void mergearrays(int arr1[], int n1, int arr2[], int n2, int result[])
{
    int i;

    for (i = 0; i < n1; i++)
    {
        result[i] = arr1[i];
    }
    for (i = 0; i < n2; i++)
    {
        result[n1 + i] = arr2[i];
    }
}

int main()
{
    int n1;
    printf("Enter number of elements for the first array: ");
    scanf("%d", &n1);
    int *arr1 = (int *)malloc(n1 * sizeof(int));

    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int n2;
    printf("Enter number of elements for the second array: ");
    scanf("%d", &n2);
    int *arr2 = (int *)malloc(n2 * sizeof(int));

    printf("Enter the elements of the array :\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int *result = (int *)malloc((n1 + n2) * sizeof(int));
    mergearrays(arr1, n1, arr2, n2, result);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", result[i]);
    }

    free(arr1);
    free(arr2);
    free(result);

    return 0;
}