// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

int main() {
    int n, i;
    int binary[32];  // assuming 32-bit integer
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("0\n");
        return 0;
    }

    i = 0;
    while(n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for(i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
