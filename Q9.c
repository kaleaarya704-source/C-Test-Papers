#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three integers : ");
    scanf("%d %d %d",&a , &b , &c);

    if (a>=b && a>=c)
    {
        printf("%d is largest number.\n",a);
    }
    else if (b>=c && b>=a)
    {
        printf("%d is largest number.\n",b);
    }
    else
    {
        printf("%d is largest number.\n",c);
    }
    return 0;
}