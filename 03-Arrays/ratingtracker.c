#include <stdio.h>

#define TOTAL_USERS 10

int main()
{
    int ratings[TOTAL_USERS];
    int sum = 0;
    int best_count = 0;  // Tracks 5-star ratings
    int worst_count = 0; // Tracks 1-star ratings
    float average;

    printf("--- Movie Ratings Tracker System ---\n");
    printf("Please enter the ratings (1 to 5) for %d users:\n\n", TOTAL_USERS);

    // Input loop with validation
    for (int i = 0; i < TOTAL_USERS; i++)
    {
        while (1)
        {
            printf("User %d rating (1-5): ", i + 1);
            if (scanf("%d", &ratings[i]) != 1)
            {
                // Handle non-integer inputs
                printf("Invalid input. Please enter a number between 1 and 5.\n");
                while (getchar() != '\n')
                    ; // Clear input buffer
                continue;
            }

            if (ratings[i] >= 1 && ratings[i] <= 5)
            {
                break; // Valid rating, exit the validation loop
            }
            else
            {
                printf("Rating out of bounds! Must be between 1 and 5.\n");
            }
        }

        // Process data for calculations
        sum += ratings[i];

        if (ratings[i] == 5)
        {
            best_count++;
        }
        else if (ratings[i] == 1)
        {
            worst_count++;
        }
    }

    // Compute average rating
    average = (float)sum / TOTAL_USERS;

    // Display Results
    printf("\n================ STATS ================\n");
    printf("Average Movie Rating:     %.2f / 5.00\n", average);
    printf("Number of Best Ratings (5): %d\n", best_count);
    printf("Number of Worst Ratings (1): %d\n", worst_count);
    printf("=======================================\n");

    return 0;
}