// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main() {
    int d, y;
    if (scanf("%2d/04/%4d", &d, &y) == 2) {
        printf("%02d-Apr-%04d", d, y);
    }
    return 0;
}
