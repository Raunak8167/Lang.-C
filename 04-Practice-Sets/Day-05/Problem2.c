#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c;
    printf("Enter a : ");
    scanf("%f",&a);
    printf("Enter b : ");
    scanf("%f",&b);
    printf("Enter c : ");
    scanf("%f",&c);
    
    float s = (a + b + c) / 2;
    printf("Semi-perimeter of triangle is : %.2f\n",s);
    float Area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is : %.2f\n",Area);
    float cos_A = (b*b + c*c - a*a) / (2*b*c);
    printf("Cosine of angle A is : %.2f\n",cos_A);
    float cos_B = (a*a + c*c - b*b) / (2*a*c);
    printf("Cosine of angle B is : %.2f\n",cos_B);
    float cos_C = (a*a + b*b - c*c) / (2*a*b);
    printf("Cosine of angle C is : %.2f\n",cos_C);
    return 0;
}
