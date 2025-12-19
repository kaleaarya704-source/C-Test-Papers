#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, j, max, min;
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
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    max = a[0][0];
    min = a[0][0];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
                if (a[i][j] < min)
                {
                    min = a[i][j];
                }
            }
        }
    }
    printf("Largest & Smallest element on diagonal : Largest = %d\nSmallest = %d", max, min);
    for (i = 0; i < r; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}