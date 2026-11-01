#include <stdio.h>

int main() {
    int n, temp, digit;
    int count = 0;
    int frequency[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;
    if (temp < 0) {
        temp = -temp; 
    }

    if (temp == 0) {
        count = 1;
        frequency[0] = 1;
    } else {
        while (temp > 0) {
            digit = temp % 10;
            frequency[digit]++;
            count++;
            temp = temp / 10;
        }
    }

    printf("Total number of digits = %d\n", count);
    printf("Frequency of each digit:\n");
    
    for (digit = 0; digit <= 9; digit++) {
        if (frequency[digit] > 0) {
            printf("%d = %d\n", digit, frequency[digit]);
        }
    }

    return 0;
}
