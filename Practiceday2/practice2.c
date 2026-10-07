
#include <stdio.h>

int main()
{
    double x[] = {0.1, 0.3, 0.6, 0.7, 0.9, 1.2, 1.3};
    double y[] = {1.2, 4.5, 3.6, 7.2, 6.9, 8.7, 9.1};

    int n = 7, i;
    double sx = 0, sy = 0;
    double sxy = 0, sx2 = 0;
    double m, c, denominator;

    for (i = 0; i < n; i++)
    {
        sx = sx + x[i];
        sy = sy + y[i];
        sxy = sxy + x[i] * y[i];
        sx2 = sx2 + x[i] * x[i];
    }

    denominator = n * sx2 - sx * sx;

    if (denominator == 0)
    {
        printf("Slope cannot be calculated.\n");
        return 0;
    }

    m = (n * sxy - sx * sy) / denominator;
    c = (sy - m * sx) / n;

    printf("Slope m = %.6f\n", m);
    printf("Intercept c = %.6f\n", c);
    printf("Best-fit equation: y = %.6fx + %.6f\n", m, c);

    return 0;
}
