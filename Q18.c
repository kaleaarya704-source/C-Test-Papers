#include<stdio.h>
int main()
{
    int a , b,max;
    printf("Enter two numbers : ");
    scanf("%d %d ",&a , &b);

    max = (a>b) ? a : b;
    printf("%d is maximum number.\n",max);
    return 0;
}