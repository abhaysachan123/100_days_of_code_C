// Q112: Maximum sum of any contiguous subarray using Kadane's Algorithm.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        current_sum = (current_sum + arr[i] > arr[i]) ? current_sum + arr[i] : arr[i];
        if (current_sum > max_so_far)
            max_so_far = current_sum;
    }

    printf("%d\n", max_so_far);

    return 0;
}
