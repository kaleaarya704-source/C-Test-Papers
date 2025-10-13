#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n , i ;
    float sum = 0 , avg;
    int *arr ;

    printf("Enter number of elements :");
    scanf("%d",&n);

    arr = (int*)malloc(sizeof(int)*n);

    if (arr==NULL)
    {
        printf("Memory not allocated.");
        return -1;
    }

    printf("Enter %d elements :\n",n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum +=arr[i];
    }

    avg = sum/n;

    printf("The average of the array elements : %d",avg);

    free(arr);

    return 0;
}