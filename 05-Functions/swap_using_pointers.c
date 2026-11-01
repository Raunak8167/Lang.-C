#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a;
    int b;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("The value of a after swapping: %d\n", a);
    printf("The value of b after swapping: %d\n", b);
    return 0;
}