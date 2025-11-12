// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int v = 0, c = 0, i;
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels=%d, Consonants=%d", v, c);
    return 0;
}
