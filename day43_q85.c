// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/

#include <stdio.h>

int main() {
    char s[100];
    int len = 0, i;
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n')
        len++;

    for (i = len - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}
