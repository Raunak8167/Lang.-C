#include<stdio.h>
#include<stdbool.h>
int main (){
    int x;
    printf("Enter The Year :");
    scanf("%d" , &x);
    if (x%4==0 && x%100!=0 || x%400==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}