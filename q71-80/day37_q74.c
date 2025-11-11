// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/

#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], t[10][10];
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            t[j][i] = a[i][j];

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}
