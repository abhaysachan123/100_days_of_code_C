// Q127: Write a program that reads text from input.txt, converts all lowercase letters 
// to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);
        fputc(ch, out);
    }

    printf("File converted successfully.\n");

    fclose(in);
    fclose(out);

    return 0;
}
