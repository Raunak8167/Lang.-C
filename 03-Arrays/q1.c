#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof *arr);
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter the elements of the array :\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}