// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
            num1 + num2, num1 - num2, num1 * num2, num2 != 0 ? num1 / num2 : 0);

    return 0;
}