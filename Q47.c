#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n, i, *arr;
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    printf("Enter size of array : ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
            secondLargest = arr[i];
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
            secondSmallest = arr[i];
    }
    printf("Secod Largest = %d\nSecond Smallest = %d\n", secondLargest, secondSmallest);
    free(arr);
    return 0;
}