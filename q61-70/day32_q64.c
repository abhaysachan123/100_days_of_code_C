// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main() {
    long n;
    int freq[10] = {0}, d, max = 0, most;
    scanf("%ld", &n);
    while (n > 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            most = i;
        }
    }
    printf("%d", most);
    return 0;
}
