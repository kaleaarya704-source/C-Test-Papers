#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements :");
    scanf("%d",&n);

    int *A = (int *) malloc(sizeof(int)*n);
    if (A == NULL)
    {
        printf("Memory not allocated.");
        exit(-1);
    }
    
    printf("Enter %d elements : " , n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    int oddCount = 0 ;
    int evenCount = 0 ;

    for (int  i = 0; i < n; i++)
    {
        if (A[i]%2==0)
        {
            A[i]=0;
            evenCount++;
        }
        else if (A[i]%2==1)
        {
            A[i]=1;
            oddCount++;
        }
    }

    for (int  i = 0; i < n; i++)
    {
        if (i < evenCount)
        {
            A[i]=0;
        }
        else
        {
            A[i]=1;
        }
        printf("%d ",A[i]);
    }
}