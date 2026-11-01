#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Letters
        for (int j = 0; j <= 2 * i; j++) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
    return 0;
}