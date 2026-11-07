/*Count the number of triplets whose sum is
equal to the given value x.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x, count = 0;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum : ");
    scanf("%d", &x);
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count++;
                    printf("Found Triplet : (%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("Number of triplets with sum %d is %d\n", x, count);
    return 0;
}