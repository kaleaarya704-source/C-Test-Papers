#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, j;
    printf("Enter value of rows and columns : ");
    scanf("%d %d", &r, &c);
    int **a = (int **)malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter elements :\n ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int row;
    printf("Enter row number (0-%d) : ", r - 1);
    scanf("%d", &row);
    if (row >= 0 && row < r)
    {
        printf("Row %d : ", row);
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[row][j]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid Row.");
    }
    for (i = 0; i < r; i++)
    {
        free(a[i]);
    }
    free(a);
}