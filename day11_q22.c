// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float cost, selling, percent;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &selling);

    if(selling > cost) {
        percent = ((selling - cost) / cost) * 100;
        printf("Profit %.2f%%\n", percent);
    }
    else if(selling < cost) {
        percent = ((cost - selling) / cost) * 100;
        printf("Loss %.2f%%\n", percent);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
