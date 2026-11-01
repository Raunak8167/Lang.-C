#include <stdio.h>

int main()
{
    int choice, quantity;
    float total;

    printf("===== JUET CAFETERIA =====\n");
    printf("1. Burger   - Rs.85\n");
    printf("2. Pizza    - Rs.125\n");
    printf("3. Sandwich - Rs.60\n");
    printf("4. Lassi    - Rs.40\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(choice)
    {
        case 1:
            total = 85 * quantity;
            printf("Food: Burger\n");
            printf("Total payable amount = Rs.%.2f\n", total);
            break;

        case 2:
            total = 125 * quantity;
            printf("Food: Pizza\n");
            printf("Total payable amount = Rs.%.2f\n", total);
            break;

        case 3:
            total = 60 * quantity;
            printf("Food: Sandwich\n");
            printf("Total payable amount = Rs.%.2f\n", total);
            break;

        case 4:
            total = 40 * quantity;
            printf("Food: Lassi\n");
            printf("Total payable amount = Rs.%.2f\n", total);
            break;

        default:
            printf("Invalid food choice!\n");
    }

    return 0;
}