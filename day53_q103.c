// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array.
// The pivot index is the index where the sum of all numbers strictly to the left equals the sum strictly to the right.
// Print the leftmost pivot index. If none exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0
*/

#include <stdio.h>

int main() {
    int n, nums[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int total = 0;
    for (int i = 0; i < n; i++)
        total += nums[i];

    int leftSum = 0;

    for (int i = 0; i < n; i++) {
        int rightSum = total - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("%d", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1");
    return 0;
}
