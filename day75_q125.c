// Q125: Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>

int main() {
    char filename[100], text[500];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();  
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
