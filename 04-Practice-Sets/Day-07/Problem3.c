#include <stdio.h>

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
        result = 1;
    else if(n < 0)
        result = -1;
    else
        result = 0;

    switch(result)
    {
        case 1:
            printf("Positive");
            break;

        case -1:
            printf("Negative");
            break;

        case 0:
            printf("Zero");
            break;
    }

    return 0;
}