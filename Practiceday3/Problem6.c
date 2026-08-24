#include <stdio.h>

int main() {

    char name[100];
    char branch_name[100];
    char university_name[100];
    char address_of_university[100];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your branch name: ");
    gets(branch_name);

    printf("Enter your university name: ");
    gets(university_name);

    printf("Enter your university address: ");
    gets(address_of_university);

    puts(name);
    puts(branch_name);
    puts(university_name);
    puts(address_of_university);

    return 0;
}