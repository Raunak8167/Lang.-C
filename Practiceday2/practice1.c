
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double v0, angle, rad;
    double height, range, time;
    double maxRange = 0.0;
    int maxAngle = 0;
    const double g = 9.8;

    printf("Enter initial velocity (m/s): ");
    scanf("%lf", &v0);

    if (v0 < 0)
    {
        printf("Velocity cannot be negative.\n");
        return 0;
    }

    printf("\nAngle\tHeight\t\tRange\t\tTime\n");

    for (angle = 5; angle <= 90; angle += 5)
    {
        rad = angle * PI / 180.0;

        height = v0 * v0 * sin(rad) * sin(rad) / (2.0 * g);

        range = v0 * v0 * sin(2.0 * rad) / g;

        time = 2.0 * v0 * sin(rad) / g;

        printf("%.0f\t%.4f\t\t%.4f\t\t%.4f\n",
               angle, height, range, time);

        if (range > maxRange)
        {
            maxRange = range;
            maxAngle = (int)angle;
        }
    }

    printf("\nMaximum range = %.4f m\n", maxRange);
    printf("Angle of maximum range in this table = %d degrees\n",
           maxAngle);

    return 0;
}
