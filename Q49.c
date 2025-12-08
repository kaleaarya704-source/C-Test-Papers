#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, j, max, min;
    int **arr;
    printf("Enter rows and columns :");
    scanf("%d %d", &r, &c);
    arr = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements :\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    max = min = arr[0][0];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    printf("Maximum = %d\nMinimum=%d\n", max, min);
    for (i = 0; i < r; i++)
        free(arr[i]);
    free(arr);
    return 0;
}