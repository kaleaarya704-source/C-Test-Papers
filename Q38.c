#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, max, min, *arr;
    printf("Enter size of array :");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum = %d\nMinimum=%d\n", max, min);
    free(arr);
    return 0;
}