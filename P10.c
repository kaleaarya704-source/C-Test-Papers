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
    int col;
    printf("Enter column number (0-%d) : ", c - 1);
    scanf("%d",&col);
    if (col >= 0 && col < c)
    {
        printf("Column %d : ",col);
        for ( i = 0; i < r; i++)
        {
            printf("%d ",a[i][col]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid column.");
    }
    for (i = 0; i < r; i++)
    {
        free(a[i]);
    }
    free(a);
}