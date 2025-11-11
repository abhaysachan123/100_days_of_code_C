// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], rowSum[10];
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }

    for (i = 0; i < r; i++)
        printf("%d ", rowSum[i]);

    return 0;
}
