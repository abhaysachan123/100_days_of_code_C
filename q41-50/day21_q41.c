// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    int power = 1;
    for (int i = 0; i < digits; i++)
        power *= 10;

    swapped = last * power + (n % power / 10) * 10 + first;

    printf("%d\n", swapped);
    return 0;
}
