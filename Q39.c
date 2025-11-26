#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, even = 0, odd = 0, *arr;
    printf("Enter size of array : ");
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    printf("Enter %d elements : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\nOdd = %d\n", even, odd);
    free(arr);
    return 0;
}