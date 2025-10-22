#include<stdio.h>
int main()
{
    int x;
    int x2,result;

    printf("Enter a number : ");
    scanf("%d",&x);

    x2 = x * x;
    result = x2 + 2 * x;

    printf("x^2 = %d\n",x2);
    printf("x^2 + 2x = %d\n",result);

    return 0;
}