//without using third variable swap two numbers
#include<stdio.h>
int main (){
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping, a = %d and b = %d",a,b);
    return 0;
}