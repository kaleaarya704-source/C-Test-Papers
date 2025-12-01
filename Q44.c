#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, flag = 1, *arr;
    printf("Enter size of array :");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Array is palindrome.\n");
    else
        printf("Array is not palindrome.\n");
    free(arr);
    return 0;
}