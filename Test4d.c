#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n ;
    printf("Enter number of elements :");
    scanf("%d",&n);

    int *A = (int*)malloc(sizeof(int)*n);

    if (A==NULL)
    {
        printf("Memory not allocated.");
        exit(-1);
    }

    printf("Enter %d elements : ", n);

    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    int count = 0; 

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] == A[j] && i<j)
            {
                count++;
            }
        }
    }

    printf("There are %d good pairs . ", count);

    free(A);
    return 0;
}