// Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
*/

#include <stdio.h>

int main() {
    int n, i, j, prime;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
