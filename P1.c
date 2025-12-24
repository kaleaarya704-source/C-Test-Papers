#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of nxn matrix: ");
    scanf("%d", &n);

    int **a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        a[i] = (int *)malloc(n * sizeof(int));

    int *arr = (int *)malloc(n * sizeof(int));
    int *result = (int *)malloc(n * sizeof(int));

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Multiply matrix and array
    for (int i = 0; i < n; i++) {
        result[i] = 0;
        for (int j = 0; j < n; j++)
            result[i] += a[i][j] * arr[j];
    }

    printf("\nResultant array:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", result[i]);

    // Free memory
    for (int i = 0; i < n; i++)
        free(a[i]);
    free(a);
    free(arr);
    free(result);

    return 0;
}
