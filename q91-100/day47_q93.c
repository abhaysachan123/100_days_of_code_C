// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int count[26] = {0}, i;

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0'; i++)
        if (s1[i] >= 'a' && s1[i] <= 'z')
            count[s1[i] - 'a']++;

    for (i = 0; s2[i] != '\0'; i++)
        if (s2[i] >= 'a' && s2[i] <= 'z')
            count[s2[i] - 'a']--;

    for (i = 0; i < 26; i++)
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }

    printf("Anagrams");
    return 0;
}
