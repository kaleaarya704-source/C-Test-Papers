#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *a, *b;
    printf("Enter size of array : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements in first array :\n ",n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        b[i] = a[i];
    printf("Copied array : ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");
    free(a);
    free(b);
    return 0;
}