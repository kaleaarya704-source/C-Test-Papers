#include <stdio.h>
int main()
{
    int n , i = 1 ;
    long fact = 1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while ( i <= n )
    {
        fact*=i;
        i++;
    }
    printf("Factorial = %ld.\n",fact);
    return 0;
}