// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) 
// and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char op[20];
    int a, b;
    enum Operation choice;

    printf("Enter operation (ADD/SUBTRACT/MULTIPLY) followed by two numbers: ");
    scanf("%s %d %d", op, &a, &b);

    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 1;
    }

    switch (choice) {
        case ADD: printf("%d\n", a + b); break;
        case SUBTRACT: printf("%d\n", a - b); break;
        case MULTIPLY: printf("%d\n", a * b); break;
    }

    return 0;
}
