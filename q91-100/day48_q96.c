// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *wordStart = str;
    for (char *p = str; ; p++) {
        if (*p == ' ' || *p == '\0') {
            reverseWord(wordStart, p - 1);
            if (*p == '\0')
                break;
            wordStart = p + 1;
        }
    }

    printf("%s", str);
    return 0;
}
