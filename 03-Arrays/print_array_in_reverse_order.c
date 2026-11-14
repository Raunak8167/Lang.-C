#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("Revered Array : %d\n", arr[i]);
    }
    return 0;
}