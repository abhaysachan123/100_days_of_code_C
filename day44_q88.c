// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world
*/

#include <stdio.h>

int main() {
    char s[100];
    int i;
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            s[i] = '-';
    }

    printf("%s", s);
    return 0;
}
