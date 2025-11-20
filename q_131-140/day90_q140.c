// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    struct Person p;

    printf("Enter gender (MALE / FEMALE / OTHER): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else {
        printf("Invalid gender!\n");
        return 1;
    }

    switch (p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
    }

    return 0;
}
