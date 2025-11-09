// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    int n, rem, product = 1, odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        if(rem % 2 != 0) {
            product *= rem;
            odd = 1;
        }
        n /= 10;
    }

    if(!odd) product = 1;
    printf("%d\n", product);

    return 0;
}
