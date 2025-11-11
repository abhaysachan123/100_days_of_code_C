// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[100][100];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int k = 0; k < r + c - 1; k++) {
        int row = (k < c) ? 0 : k - c + 1;
        int col = (k < c) ? k : c - 1;
        while (row < r && col >= 0)
            printf("%d ", a[row++][col--]);
    }

    return 0;
}
