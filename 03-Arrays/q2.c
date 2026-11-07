/* Given an array of integers,change the value of
all odd indexed elements to its second multiple and
increment all even indexed value by 10.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    if (n <= 0)
    {
        return 1;
    }
    int *arr = malloc((size_t)n * sizeof *arr);
    if (arr == NULL)
    {
        return 1;
    }
    printf("Enter number of elements in arrays :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
