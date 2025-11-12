// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char s[100];
    int i, freq[26] = {0};
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
            if (freq[s[i] - 'a'] == 2) {
                printf("%c", s[i]);
                return 0;
            }
        }
    }
    return 0;
}
