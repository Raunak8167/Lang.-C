#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks<=33){
        printf("Fail\n");
    }
    else if (marks>33 && marks<=50){
        printf("Grade: C\n");
    }
    else if (marks>50 && marks<=70){
        printf("Grade: B\n");
    }
    else if (marks>70 && marks<=90){
        printf("Grade: A\n");
    }
    else if (marks>90 && marks<=100){
        printf("Grade: A+\n");
    }
    else{
        printf("Invalid marks\n");
    }
    return 0;
}