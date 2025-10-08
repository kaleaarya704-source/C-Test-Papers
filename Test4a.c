#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n ;

    printf("Enter number of elements : ");
    scanf("%d",&n);

     int *A = malloc(sizeof(int)*n); 

    if (A==NULL)
    {
        printf("Memory not allocated.");
        exit(-1);
    }
    
    printf("Enter %d elements : " , n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &A[i]);
    }
    
    int count1 = 0 , count2 = 0 , count3 = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (A[i]>0)
        {
            count1++;
        }
        else if (A[i]==0)
        {
            count2++;
        }
        else if(A[i]<0)
        {
            count3++;
        }
    }

    printf("Positive count : %d ", count1);
    printf("Zero count : %d ", count2);
    printf("Negative count : %d ", count3);

    
    printf("Pairs with positive sum : ");
    int j,k ;
    int pair_found = 0;
    for (j = 0; j < n; j++)
    {
        for ( k = j+1 ; k < n ; k++)
        {
            if (A[j] + A[k] > 0)
            {
                printf("(%d , %d) ",A[j] , A[k]);
                pair_found = 1;
            }   
        }
    }

      if (pair_found) {
        printf("\n"); // Newline after printing pairs
    } else {
        printf("None found.\n");
    }
    free(A);
    return 0;
}