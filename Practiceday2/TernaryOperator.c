#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age >= 18 && age <=21 ? printf("You are eligible to vote and can marry.\n") : printf("You are not eligible to vote or marry.\n");
    return 0;
}