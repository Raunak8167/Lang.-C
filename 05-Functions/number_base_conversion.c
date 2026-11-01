/*Write menu driven C-language program which converts a decimal integer number into any
other base number using user defined function and any other base integer number into decimal number
using recursive function when user enters ‘1’ and ‘2’ respectively from the keyboard.*/
#include <stdio.h>
#include <math.h>

// 1. Iterative function: Converts decimal to bases 2 through 9
long long decimalToBase(int decimalNum, int base)
{
    long long convertedNum = 0, placeValue = 1;
    while (decimalNum > 0)
    {
        convertedNum += (decimalNum % base) * placeValue;
        decimalNum /= base;
        placeValue *= 10;
    }
    return convertedNum;
}

// 2. Recursive function: Converts bases 2 through 9 back to decimal
int baseToDecimal(long long num, int base, int power)
{
    if (num == 0)
        return 0;
    int lastDigit = num % 10;
    return (lastDigit * pow(base, power)) + baseToDecimal(num / 10, base, power + 1);
}

int main()
{
    int choice, base, decimalNum;
    long long customBaseNum;

    printf("1. Decimal to Base (2-9)\n2. Base (2-9) to Decimal\nEnter Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Decimal and Target Base: ");
        scanf("%d %d", &decimalNum, &base);
        printf("Result: %lld\n", decimalToBase(decimalNum, base));
    }
    else if (choice == 2)
    {
        printf("Enter Number and Current Base: ");
        scanf("%lld %d", &customBaseNum, &base);
        printf("Result: %d\n", baseToDecimal(customBaseNum, base, 0));
    }
    return 0;
}