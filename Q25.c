#include<stdio.h>
int main()
{
    int n , i = 1 , sum = 0 ;
    printf("Enter value of n : ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum+= i;
        i++;
    }
    printf("Sum of integers : %d.\n",sum);
    return 0;
}