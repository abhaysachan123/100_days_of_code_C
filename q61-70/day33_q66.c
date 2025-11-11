// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6
*/

#include <stdio.h>

int main() {
    int n, a[100], num, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &num);

    for (i = n - 1; i >= 0 && a[i] > num; i--)
        a[i + 1] = a[i];
    a[i + 1] = num;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
