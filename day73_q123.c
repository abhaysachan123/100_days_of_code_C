// Q123: Read a text file and count the total number of characters, words, and lines. 
// A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:

Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file!");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (!isspace(ch)) {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
