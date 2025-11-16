#include<stdio.h>
int main()
{
    int n , temp , rem , rev = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n/=10;
    }
    if (temp==rev)
        printf("Palindrome.\n");
    else
        printf("Not Palindrome.\n");
    return 0;
}