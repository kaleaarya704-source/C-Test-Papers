#include <stdio.h>
int main()
{
    int n ;
    printf("Enter value of n : ");
    scanf("%d",&n);

    int i = 1;
    while (i<=n)
    {
        if (i % 2 == 0 )
        {
            printf("%d",i);
        }
        i++;
    }
    return 0;   
}