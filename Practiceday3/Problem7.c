#include<stdio.h>
#include<math.h>
int main(){
    float kilometer, meter, feet, inch, centimeter;
    printf("Enter distance between two places in kilometers:");
    scanf("%f", &kilometer);
    meter = kilometer * 1000;
    feet = meter * 3.28084;
    inch = feet * 12;
    centimeter = inch * 2.54;
    printf("Distance in meter: %f\n", meter);
    printf("Distance in feet: %f\n", feet);
    printf("Distance in inch: %f\n", inch);
    printf("Distance in centimeter: %f\n", centimeter);
    return 0;
}