#include <stdio.h>
#include <stdbool.h>

// Function to check if the square of a number is a palindrome
bool isSquarePalindrome(long long num)
{
    long long square = num * num;
    long long original = square;
    long long reversed = 0;

    // Reverse the digits of the squared number
    while (square > 0)
    {
        int digit = square % 10;
        reversed = reversed * 10 + digit;
        square /= 10;
    }

    return original == reversed;
}

int main()
{
    long long n;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (isSquarePalindrome(n))
    {
        printf("%lld squared (%lld) is a palindrome.\n", n, n * n);
    }
    else
    {
        printf("%lld squared (%lld) is NOT a palindrome.\n", n, n * n);
    }

    return 0;
}
