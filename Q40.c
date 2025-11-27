#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *arr;
    printf("Enter size of array :");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}