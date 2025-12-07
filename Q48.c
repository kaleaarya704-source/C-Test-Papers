#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, j, sum = 0;
    int **arr;
    printf("Enter rows and columns : ");
    scanf("%d %d", &r, &c);
    arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));
    printf("Enter elements :");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    printf("Sum of all elements = %d\n", sum);
    for (i = 0; i < r; i++)
        free(arr[i]);
    free(arr);
    return 0;
}