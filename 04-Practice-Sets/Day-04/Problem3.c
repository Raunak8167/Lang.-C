#include<stdio.h>
int main (){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){
        printf("Eligible to vote.\n");
        if (age>=21){
            printf("Eligible to get married.\n");
            if (age>=25){
                printf("Eligible to contest elections.\n");
                if (age>=35){
                    printf("Eligible to become president.\n");
                }
            }
        }
    }
    else{
        printf("Not eligible to vote.\n");
    }
    return 0;
}