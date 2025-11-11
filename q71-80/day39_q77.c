// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>

int main() {
    int n, i, j, a[10][10], diag[10], k = 0, distinct = 1;
    scanf("%d %d", &n, &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        diag[k++] = a[i][i];

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (diag[i] == diag[j])
                distinct = 0;

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
