#include <stdio.h>

int main() {

    for (int i = 5; i >= 1; i--) {

        // Spaces
        for (int j = 1; j <= 5 - i; j++) {
            printf("  ");
        }

        // Opening quote
        printf("\"");

        // Find starting character of this row
        char ch = 'A' + (25 - (2 * i - 1));

        // Print characters
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%c", ch);
            ch++;

            if (j < 2 * i - 1) {
                printf(" ");
            }
        }

        // Closing quote
        printf("\"");

        printf("\n");
    }

    return 0;
}