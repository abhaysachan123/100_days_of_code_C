// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while(tempB != 0) {
        int rem = tempA % tempB;
        tempA = tempB;
        tempB = rem;
    }

    hcf = tempA;
    printf("%d\n", hcf);

    return 0;
}
