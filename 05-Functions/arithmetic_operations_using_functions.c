#include <stdio.h>
#include <stdlib.h>
int add(int x, int y)
{
    int sum = x + y;
    return sum;
}
int subtract(int x, int y)
{
    int sub = abs(x - y);
    return sub;
}
int product(int x, int y)
{
    int product = x * y;
    return product;
}
int division(int x, int y)
{
    int divide = x / y;
    return divide;
}
int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("Sum = %d\n", sum);
    int multiply = product(a, b);
    printf("Product = %d\n", multiply);
    int difference = subtract(a, b);
    printf("Difference = %d\n", difference);
    int quotient = division(a, b);
    printf("Division = %d\n", quotient);
    return 0;
}