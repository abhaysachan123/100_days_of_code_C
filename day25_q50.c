// Q50: Write a program to print the following pattern:
/*
*****
 ****
  ***
   **
    *

Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 5; k > i; k--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
