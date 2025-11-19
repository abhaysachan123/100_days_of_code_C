// Q124: Take two filenames from the user – a source file and a destination file. 
// Copy all the content from the source file to the destination file using 
// fgetc() and fputc().

/*
Sample Test Cases:

Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    char src[100], dest[100];

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    FILE *fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error: Could not open/create destination file!\n");
        fclose(fs);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);

    return 0;
}
