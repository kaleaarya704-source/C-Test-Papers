#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &r, &c);
    int **a = (int **)malloc(r * sizeof(int *));
    int **b = (int **)malloc(r * sizeof(int *));
    int **sum = (int **)malloc(r * sizeof(int *));
    int **diff = (int **)malloc(r * sizeof(int *));

    for (int i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
        b[i] = (int *)malloc(c * sizeof(int));
        sum[i] = (int *)malloc(c * sizeof(int));
        diff[i] = (int *)malloc(c * sizeof(int));
    }

    printf("Enter elements of first matrix :\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix :\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nSum of matrices :\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

     printf("\nDifference of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d\t", diff[i][j]);
        printf("\n");
    }

     for (int i = 0; i < r; i++) {
        free(a[i]);
        free(b[i]);
        free(sum[i]);
        free(diff[i]);
    }
    free(a); free(b); free(sum); free(diff);

    return 0;
}