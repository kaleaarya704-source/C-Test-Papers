#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *arr, *pos, *neg, p = 0, q = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    pos = (int *)malloc(n * sizeof(int));
    neg = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0)

            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }
    printf("Positive numbers : ");
    for (i = 0; i < n; i++)
        scanf("%d", &pos[i]);
    printf("Negative numbers :");
    for (i = 0; i < n; i++)
        scanf("%d", &neg[i]);

    free(arr);
    return 0;
}