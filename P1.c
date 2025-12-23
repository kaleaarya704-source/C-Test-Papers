#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, num;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int **a = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        a[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter integer value: ");
    scanf("%d", &num);

    printf("\nResultant matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%d\t", a[i][j] * num);
        printf("\n");
    }

    for (int i = 0; i < r; i++)
        free(a[i]);
    free(a);

    return 0;
}
