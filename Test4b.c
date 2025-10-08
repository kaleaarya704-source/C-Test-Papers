#include<stdio.h>
int main()
{
    int n ;
    printf("Enter number of elements :");
    scanf("%d",&n);

    int i = 0 ;
    

    while (i < n)
    {
        int j = 1;
        while (j < n-i)
        {
            printf("%d" , j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}