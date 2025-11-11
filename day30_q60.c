// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1
*/

#include <stdio.h>

int main() {
    int n, i, a[100];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);
    return 0;
}
