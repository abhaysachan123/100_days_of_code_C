// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50] = "";
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
        if (str[i] == '\0') break;
        i++;
    }

    printf("%s", longest);
    return 0;
}
