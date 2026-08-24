//Projectile motion
#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
int main () {
    float u;
    float angle;
    float g=9.8;  
    printf("Enter u: "); 
    scanf("%f", &u);
    printf("Enter angle: ");
    scanf("%f", &angle);
    float TimeOfFlight = (2*u*sin(angle*M_PI/180))/g;
    float MaxHeight = (pow(u,2)*pow(sin(angle*M_PI/180),2))/(2*g);
    float Range = (pow(u,2)*sin(2*angle*M_PI/180))/g;
    printf("Time of Flight: %f\n", TimeOfFlight);
    printf("Maximum Height: %f\n", MaxHeight);
    printf("Range: %f\n", Range);
    return 0;
}