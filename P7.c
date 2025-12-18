#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, j, min;
    int **a;
    printf("Enter value of rows and columns : ");
    scanf("%d %d", &r, &c);
    a = (int **)malloc(r * sizeof(int));
    for (i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter elements :\n");
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
    printf("\n");
    min = a[0][0];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("Smallest element : %d", min);
    for (i = 0; i < r; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}