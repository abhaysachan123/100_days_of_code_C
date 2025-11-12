// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    char *token = strtok(str, " ");
    char last[50];

    while (token != NULL) {
        strcpy(last, token);
        token = strtok(NULL, " ");
    }

    token = strtok(str, " ");
    while (token != NULL) {
        if (strcmp(token, last) == 0)
            break;
        printf("%c.", toupper(token[0]));
        token = strtok(NULL, " ");
    }

    printf(" %s", last);
    return 0;
}
