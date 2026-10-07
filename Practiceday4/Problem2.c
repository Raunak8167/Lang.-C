#include<stdio.h>
#include<math.h>
int main(){
    int amount;
    int ten_notes;
    int five_notes;
    int hundred_notes;
    printf("Enter withdrawal amount: ");
    scanf("%d",&amount);
    hundred_notes = amount/100;
    amount = amount%100;
    five_notes = amount/5;
    amount = amount%5;
    ten_notes = amount/10;
    amount = amount%10;
    printf("Number of hundred notes: %d\n", hundred_notes);
    printf("Number of five notes: %d\n", five_notes);
    printf("Number of ten notes: %d\n", ten_notes);
    return 0;
}