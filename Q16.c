#include<stdio.h>
int main()
{
    int a ,b , quotient , remainder;
    printf("Enter two integers :");
    scanf("%d %d",&a,&b);

    if (b!=0)
    {
        quotient = a / b;
        remainder = a % b;

        printf("Quotient = %d\n",quotient);
        printf("Remainder = %d\n",remainder);
    }
    else
    {
        printf("Division not possible second number cannot be zero");
    }
    
    return 0;
}