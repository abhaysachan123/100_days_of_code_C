// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/

#include <stdio.h>

int main() {
    int n, a[100], pos, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
