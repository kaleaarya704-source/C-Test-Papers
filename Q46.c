#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *arr;
    int evenSum = 0, oddSum = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    printf("Difference = %d\n", evenSum - oddSum);
    free(arr);
    return 0;
}