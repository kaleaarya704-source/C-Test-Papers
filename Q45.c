#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j = 0, *arr, *temp;
    printf("Enter size of array :");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    temp = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
        if (arr[i] != 0)
            temp[j++] = arr[i];
    while (j < n)
        temp[j++] = 0;
    printf("Array after moving zeroes : ");
    for (i = 0; i < n; i++)
        printf("%d", temp[i]);
    printf("\n");
    free(arr);
    free(temp);
    return 0;
}