#include <stdio.h>
#include <math.h>

// Function to calculate the sine series sum
double calculate_sin(double x, int n)
{
    double total_sum = 0.0;
    double term = x; // The first term (where n = 1) is x

    for (int i = 1; i <= n; i++)
    {
        total_sum += term;

        // Efficiently compute the next term from the current one
        // Next term = current_term * (-x^2) / ((2i) * (2i + 1))
        term = term * (-x * x) / ((2 * i) * (2 * i + 1));
    }

    return total_sum;
}

int main()
{
    double angle_degrees, angle_radians;
    int num_terms;

    // Get user inputs
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    printf("Enter the number of terms (n): ");
    scanf("%d", &num_terms);

    // Convert degrees to radians without relying on non-standard M_PI.
    angle_radians = angle_degrees * (acos(-1.0) / 180.0);

    // Calculate results
    double series_result = calculate_sin(angle_radians, num_terms);
    double exact_result = sin(angle_radians);

    // Display results
    printf("\nCalculated sum up to %d terms: %.6f\n", num_terms, series_result);
    printf("Exact sin() value from math.h: %.6f\n", exact_result);

    return 0;
}
