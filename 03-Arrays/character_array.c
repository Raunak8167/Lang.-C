/*Exercise#4: Write user input C-language program by passing 1D character array as an argument in user
defined function to store vowels in
vowels[ ] and consonants in consonants[ ] and print the
elements of both the character arrays with their element counts. */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n];
    int vowel_count = 0;
    int consonant_count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            vowel_count++;
            printf("Vowel found: %c at index %d\n", arr[i], i);
        }
        else
        {
            consonant_count++;
            printf("Consonant found: %c at index %d\n", arr[i], i);
        }
    }

    printf("\nNumber of vowels: %d", vowel_count);
    printf("\nNumber of consonants: %d\n", consonant_count);

    return 0;
}
