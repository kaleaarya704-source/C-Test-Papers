#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d is even .\n",num);
    }
    else
    {
        printf("%d is odd.\n");
    }

    if (num > 0)
    {
        printf("%d is positive.\n",num);
    }
    else if (num < 0)
    {
        printf("%d is negative.\n",num);
    }
    else
    {
        printf("%d is zero.\n",num);
    }
    
    return 0;
    
}