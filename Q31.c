#include <stdio.h>
int main() {
    int n, count = 0;
    int sum = 0;

    printf("Enter the number of elements: ");
    int total;
    scanf("%d", &total);

    printf("Enter %d numbers:\n", total);
    for (int i = 1; i <= total; i++) {
        scanf("%d", &n);
        if (n > 0) {
            sum+= n;
            count++;
        }
    }
    int avg = sum/count;
    if (count > 0)
        printf("Average of positive numbers = %d\n", avg);
    else
        printf("No positive numbers entered.\n");

    return 0;
}
