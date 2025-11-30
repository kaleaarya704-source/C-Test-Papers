#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, key, i, found = 0, *arr;
    printf("Enter size of array : ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search : ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Element not found.\n");
    free(arr);
    return 0;
}