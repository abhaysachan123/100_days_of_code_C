// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/

#include <stdio.h>

int main() {
    char s[100];
    int len = 0, i, p = 1;
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            p = 0;
            break;
        }
    }

    if (p)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
